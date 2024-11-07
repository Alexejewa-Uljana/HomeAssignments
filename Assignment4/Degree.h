// Алексеева Ульяна st129990@student.spbu.ry

#pragma once
#include <iostream>

#ifndef DEGREE_H
#define DEGREE_H

class Degree{
public:
    Degree();
    void setDegree(uint degree);
    uint getDegree();
    void setPeriod(uint period);
    uint getPeriod();
    friend std::ostream & operator<<(std::ostream & os, Degree & degree);
    bool operator<(Degree& other);
    bool operator>(Degree& other);
private:
    uint _degree;
    uint _period;
};

#endif
