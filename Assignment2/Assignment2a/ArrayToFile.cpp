// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>
#include <fstream>
#include <header.h>


void Assignment2a::array_to_file(char* const buffer, const uintmax_t size)
{
    std::ofstream outfile;
    outfile.open("Result", std::ios::binary|std::ios::out);
    outfile.write(buffer, size);
    outfile.close();
}
