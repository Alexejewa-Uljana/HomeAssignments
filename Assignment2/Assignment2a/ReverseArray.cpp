// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>

void ReverseArray(int *pArray, int Array_size)
{
    for(int i = 0; i < (Array_size + 1) / 2; i++)
    {
        int t = *(pArray + i); // swap for pointers
        (pArray + i) = *(pArray + Array_size - i - 1);
        (pArray + Array_size - i - 1) = t;
    }
}
