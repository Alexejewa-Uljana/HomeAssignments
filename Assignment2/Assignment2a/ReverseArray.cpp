// Alexejewa Uljana

#include <iostream>
#include <algorithm>

void reverse_array(char* const buffer, const int size)
{
    for(int i = 0; i < (size + 1) / 2; i++)
    {
        std::swap(buffer[i], buffer[size - i - 1]);
    }
}
