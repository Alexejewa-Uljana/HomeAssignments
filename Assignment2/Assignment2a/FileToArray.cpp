// Alexejewa Uljana

#include <iostream>
#include <fstream>
#include <string>

char* file_to_array(const path& file)
{
    std::ifstream infile;
    infile.open(file, std::ios::binary|std::ios::in); // open file
    if (!infile.is_open()) // check for file existence
    {
        std::uintmax size = 1; // file does not exist
        char *buffer = new char[size];
        buffer[0] = 0;
    }
    else
    {
        std::uintmax size = std::filesystem::file_size(file); // file exist
        char *buffer = new [size]; // creat final array
        infile.read((char *) &buffer, size); // read file in final array
    }
    return buffer; // return final array
    delete [] buffer; // clean memory
}
