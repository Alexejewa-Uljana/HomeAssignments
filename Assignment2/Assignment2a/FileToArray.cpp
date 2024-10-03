// Alexejewa Uljana

#include <iostream>
#include <fstream>
#include <string>

std::pair<char*, int> file_to_array(const std::string& path)
{
    int size;
    char *buffer;
    std::ifstream infile;
    infile.open(path, std::ios::binary|std::ios::in); // open file
    if (!infile.is_open()) // check for file existence
    {
        int size = 1; // file does not exist
        buffer = new char[size];
        buffer[0] = 0;
    }
    else
    {
        infile.seekg(0, std::ios::end);
        int size = infile.tellg();
        buffer = new char[size]; // creat final array
        infile.read(buffer, size); // read file in final array
    }
    std::pair <char*, int> result;
    result.first = buffer;
    result.second = size;
    return result; // return pointer on first element of array, size of array;
   // delete [] buffer; clean memory
}
