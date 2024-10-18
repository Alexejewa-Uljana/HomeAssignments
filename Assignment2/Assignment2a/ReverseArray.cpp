// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>
#include <algorithm>
#include <header.h>

void Assignment2a::reverse_array(char* const buffer, const std::size_t size)
{
    for(std::size_t i = 0; i < (size + 1) / 2; i++)
    {
        std::swap(buffer[i], buffer[size - i - 1]);
    }
}
