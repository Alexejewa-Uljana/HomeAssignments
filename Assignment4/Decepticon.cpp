//Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"
#include "Decepticon.h"


Decepticon::Decepticon() {
    _level_of_evil = 100;
    _level_of_deception = 100;
}

Decepticon::Decepticon(uint level_of_evil, uint level_of_deception) {
    _level_of_evil = level_of_evil;
    _level_of_deception = level_of_deception;
}

void Decepticon::setLevel_of_evil(uint level_of_evil) {
    _level_of_evil = level_of_evil;
}

uint Decepticon::getLevel_of_evil(){
    return _level_of_evil;
}

void Decepticon::setLevel_of_deception(uint level_of_deception) {
    _level_of_deception = level_of_deception;
}

uint Decepticon::getLevel_of_deception() {
    return _level_of_deception;
}

bool Decepticon::evil_attack() {
    _level_of_deception++;
    _level_of_evil++;
    return true;
}

bool Decepticon::act_of_kidness() {
    if(_level_of_evil != 0) {
        _level_of_evil--;
    }
    return true;
}

std::ostream & operator<<(std::ostream & os, Decepticon& decepticon) {
     os << "Level: " << decepticon.getLevel() << "; " << "Strength: " << decepticon.getStrength() << "; " << "Range: " << decepticon.getRange() << "; " << "Fuel: " << decepticon.getFuel() << "; " << "Ammo: " << decepticon.getAmmo() << "; " << "Gun: " << decepticon.getGun_power() << " " << decepticon.getGun_strength() << "; " << "Level of evil: " << decepticon.getLevel_of_evil() << "; " << "Level of deception: " << decepticon.getLevel_of_deception();
     return os;
}

bool Decepticon::operator<(Decepticon& other) {
    return this->_level_of_evil < other._level_of_evil;
}

bool Decepticon::operator>(Decepticon& other) {
    return this->_level_of_evil > other._level_of_evil;
}
