// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Degree.h"

Degree::Degree()
{
    _degree = 0;
    _period = 0;
}

Degree::Degree(uint degree, uint period)
{
    _degree = degree;
    _period = period;
}

void Degree::setDegree(uint degree)
{
    _degree = (_degree + degree % 360) % 360;
    _period += degree / 360;
}

uint Degree::getDegree()
{
    return _degree;
}

void Degree::setPeriod(uint period)
{
    _period += period;
}

uint Degree::getPeriod()
{
    return _period;
}

std::ostream & operator<<(std::ostream & os, Degree & degree)
{
    os << "Degree = " << degree.getDegree() + 360 * degree.getPeriod();
    return os;
}

bool Degree::operator<(Degree& other)
{
    return this->_degree < other._degree;
}

bool Degree::operator>(Degree& other)
{
    return this->_degree > other._degree;
}
