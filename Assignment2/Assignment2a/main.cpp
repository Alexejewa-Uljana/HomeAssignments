// Alexejewa_Uljana st129990@student.spbu.ru

#include <iostream>
#include <fstream>
#include <string>
#include <header.h>
#include <filesystem>

int main(int argc, char* argv [])
{
    std::string  path; // path of file
    std::cin >> path;
    std::ifstream infile;
    infile.open(path, std::ios::binary|std::ios::in); // open file
    std::size_t size_of_file = std::filesystem::file_size(path) - 1; // size of file
    char* buffer = new char[size_of_file]; // creat array
    infile.read(buffer, size_of_file); // read file in array
    Assignment2a::reverse_array(buffer, size_of_file);
    std::ofstream outfile; // write result in new file
    outfile.open("Result", std::ios::binary|std::ios::out);
    outfile.write(buffer, size_of_file);
    infile.close(); // close files
    outfile.close();
    delete[] buffer; // clean memory
    return 0;
}
