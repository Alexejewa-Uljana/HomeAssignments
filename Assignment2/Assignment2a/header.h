//Uljana Alexejewa


#ifndef HEADER_H
#define HEADER_H

namespace Assignment2a
{
    std::pair<char*, uintmax_t> file_to_array(const std::string& path);
    void reverse_array(char* const buffer, const uintmax_t size);
    void array_to_file(char* const buffer, const uintmax_t size);
}


#endif // HEADER_H
