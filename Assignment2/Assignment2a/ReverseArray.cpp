// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>

void ReverseArray(int *pArray, int Array_size) // функция: принимающая указатель на первый элемент массива и его длину
{
    for(int i = 0; i < (Array_size + 1) / 2; i++) // проход до половины массива для замены всех пар
    {
        int t = *(pArray + i); // вспомогательная переманная для хранения значения  i-ого элемента массива
        (pArray + i) = *(pArray + Array_size - i - 1); // изменение  i-ого элемента массива
        (pArray + Array_size - i - 1) = t; // изменение (Array_size - i - 1)-ого элемента массива
    }
}
