#ifndef CLASS2_H
#define CLASS2_H

#include <iostream>
#include <vector>

class Class2 {
public:
    bool bar(int sum, std::vector <float>& vec)
    {
        return !vec.empty();
    }
};

#endif
