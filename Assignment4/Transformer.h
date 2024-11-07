// Алексеева Ульяна st129990@student.spbu.ry

#pragma once

#ifndef TRANSORMER_H
#define TRANSFORMER_H

#include <iostream>
#include "Gun.h"
#include "Degree.h"

class Transformer{
public:
    Transformer();
    ~Transformer();
    uint getGun_power();
    uint getGun_strength();
    void setAmmo(uint ammo);
    uint getAmmo();
    void setFuel(uint fuel);
    uint getFuel();
    void setRange(uint range);
    uint getRange();
    void setStrength(uint strength);
    uint getStrength();
    void setLevel(uint level);
    uint getLevel();
    bool move();
    bool jump();
    bool turn(Degree degree);
    bool fire();
    bool ultimate();
    bool transform();
    friend std::ostream & operator<<(std::ostream &os, Transformer& transformer);
    bool operator<(Transformer& other);
    bool operator>(Transformer& other);
private:
    uint _level;
    uint _strength;
    uint _range;
    uint _fuel;
    uint _ammo;
    Gun* _gun;
};

#endif
