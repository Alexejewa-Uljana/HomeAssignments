// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>
#include <fstream>
#include <string>
#include <header.h>
#include <filesystem>

/* Круто, что использовала так пару! */
std::pair<char*, uintmax_t> Assignment2a::file_to_array(const std::string& path)
{
    std::ifstream infile;
    infile.open(path, std::ios::binary|std::ios::in); // open file
   if (!infile.is_open()) // check for file existence
    {
        uintmax_t  size = 1; // file does not exist: size = 1, buffer = [0]
        char *buffer = new char[size];
        buffer[0] = '0';
        std::pair <char*, uintmax_t> result;
        result.first = buffer;
        result.second = size;
        return result;
    }
    uintmax_t size_of_file = std::filesystem::file_size(path) - 1; // size of file
    char* buffer = new char[size_of_file]; // creat final array
    infile.read(buffer, size_of_file); // read file in final array
    std::pair <char*, uintmax_t> result;
    result.first = buffer;
    result.second = size_of_file;
    return result; // return pointer on first element of array, size of array;
}
