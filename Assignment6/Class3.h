//Алексеева Ульяна st129990@student.spbu.ru
#ifndef CLASS3_H
#define CLASS3_H

#include <iostream>
#include <vector>

class Class3 {
public:
    bool bar(int num, std::vector<float>& vec)
    {
        return num == static_cast<int>(vec.size()) * (-1);
    }
};

#endif
