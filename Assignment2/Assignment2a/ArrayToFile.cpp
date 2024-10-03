// Alexejewa Uljana

#include <iostream>
#include <fstream>


void array_to_file(char* const buffer, const int size)
{
    std::ofstream outfile;
    outfile.open("Result", std::ios::binary|std::ios::out);
    outfile.write(buffer, size);
    outfile.close();
}
