// Алексеева Ульяна st129990@student.spbu.ru

#pragma once
#include <iostream>

#ifndef GUN_H
#define GUN_H

class Gun{
public:
    Gun();
    void setPower(uint power);
    uint getPower();
    void setStrength(uint strength);
    uint getStrength();
    bool attack();
    friend std::ostream & operator<<(std::ostream &os, Gun& gun);
    bool operator<(Gun& other);
    bool operator>(Gun& other);
private:
    uint _power;
    uint _strength;
};

#endif
