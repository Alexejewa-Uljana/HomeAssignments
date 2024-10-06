// Alexejewa Uljana

#include <iostream>
#include <algorithm>
#include <header.h>

void Assignment2a::reverse_array(char* const buffer, const uintmax_t size)
{
    for(uintmax_t i = 0; i < (size + 1) / 2; i++)
    {
        std::swap(buffer[i], buffer[size - i - 1]);
    }
}
