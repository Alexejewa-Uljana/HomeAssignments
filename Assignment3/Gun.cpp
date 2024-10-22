// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"

Gun::Gun(uint power, uint strength) {
    _power = power;
    _strength = strength;
}

uint Gun::getPower() {
    return _power;
}

uint Gun::getStrength() {
    return _strength;
}

bool Gun::attack() {
    if(_power > 0) _power--;
    if(_strength > 0) _strength--;
    return true;
}
