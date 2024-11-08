// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"

Gun::Gun() {
    _power = 100;
    _strength = 100;
}

Gun::Gun(uint power, uint strength) {
    _power = power;
    _strength = strength;
}

void Gun::setPower(uint power) {
    _power = power;
}

uint Gun::getPower() {
    return _power;
}

void Gun::setStrength(uint strength) {
    _strength = strength;
}
uint Gun::getStrength() {
    return _strength;
}

bool Gun::attack() {
    if(_power > 0) {
        _power--;
    }
    if(_strength > 0) {
        _strength--;
    }
    return true;
}

std::ostream & operator<<(std::ostream & os, Gun& gun) {
    os << "Power of gun = " << gun.getPower() << ", " << "strength of gun = " << gun.getStrength();
    return os;
}

bool Gun::operator<(Gun& other) {
    return this->_power < other._power;
}

bool Gun::operator>(Gun& other) {
    return this->_power > other._power;
}
