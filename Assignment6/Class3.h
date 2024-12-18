//Алексеева Ульяна st129990@student.spbu.ru
#ifndef CLASS3_H
#define CLASS3_H

#include <iostream>
#include <vector>

class Class3
{
public:
    bool bar(int num, std::vector<float>& vec)
    {
        return num == static_cast<int>(vec.size()) * (-1);
    }
    int c_3_1()
    {
        return 3;
    }
    float c_3_2()
    {
        return 3.0;
    }
    void c_3_3() {};
};

#endif
