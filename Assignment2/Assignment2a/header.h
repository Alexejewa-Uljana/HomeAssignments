//Uljana Alexejewa


#ifndef HEADER_H
#define HEADER_H

namespace Assignment2a
{
    std::pair<char*, int> file_to_array(const std::string& path);
    void reverse_array(char* const buffer, const int size);
    void array_to_file(char* const buffer, const int size);
}


#endif // HEADER_H
