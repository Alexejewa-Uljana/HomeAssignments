// Алексеева Ульяна st129990@student.spbu.ru

#pragma once
#include <iostream>

class Gun{
public:
    Gun(uint power, uint strength);
    uint getPower();
    uint getStrength();
    bool attack();
private:
    uint _power;
    uint _strength;
};
