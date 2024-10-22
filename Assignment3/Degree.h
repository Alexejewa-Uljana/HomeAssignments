// Алексеева Ульяна st129990@student.spbu.ry

#pragma once
#include <iostream>

class Degree{
public:
    Degree();
    void setDegree(uint degree);
    uint getDegree();
    void setPeriod(uint period);
    uint getPeriod();
private:
    uint _degree;
    uint _period;
};
