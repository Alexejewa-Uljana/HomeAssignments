// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"
#include "Shifter.h"


Shifter::Shifter()
{
    _size = 100;
    _weight = 100;
}

Shifter::Shifter(uint size, uint weight)
{
    _size = size;
    _weight = weight;
}

void Shifter::setSize(uint size)
{
    _size = size;
}

uint Shifter::getSize()
{
    return _size;
}

void Shifter::setWeight(uint weight)
{
    _weight = weight;
}

uint Shifter::getWeight()
{
    return _weight;
}

bool Shifter::transform_size()
{
    _size++;
    return true;
}

bool Shifter::transform_weight()
{
    _weight++;
    return true;
}

std::ostream & operator<<(std::ostream & os, Shifter& shifter)
{
    os << "Level: " << shifter.getLevel() << "; " << "Strength: " << shifter.getStrength() << "; " << "Range: " << shifter.getRange() << "; " << "Fuel: " << shifter.getFuel() << "; " << "Ammo: " << shifter.getAmmo() << "; " << "Gun: " << shifter.getGun_power() << " " << shifter.getGun_strength() << "; " << "Size: " << shifter.getSize() << "; " << "Weight: " << shifter.getWeight();
    return os;
}

bool Shifter::operator<(Shifter& other)
{
    return this->_size < other._size;
}

bool Shifter::operator>(Shifter& other)
{
    return this->_size > other._size;
}
