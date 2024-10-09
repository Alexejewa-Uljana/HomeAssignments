// Alexejewa_Uljana st129990@student.spbu.ru

#include <iostream>
#include <header.h>

int main(int argc, char* argv [])
{
    std::string  path;
    std::cin >> path;
    std::pair <char*, uintmax_t> array_size = Assignment2a::file_to_array(path);
    Assignment2a::reverse_array(array_size.first, array_size.second);
    Assignment2a::array_to_file(array_size.first, array_size.second);
    return 0;
}
