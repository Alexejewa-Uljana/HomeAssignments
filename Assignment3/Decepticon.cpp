//Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Transformer.h"
#include "Gun.h"
#include "Decepticon.h"


Decepticon::Decepticon() {
    _ammo = 100;
    _fuel = 100;
    _range = 100;
    _strength = 100;
    _level = 1;
    _level_of_evil = 100;
    _level_of_deceptrion = 100;
    _gun = new Gun(_ammo + _fuel + _range + _strength + _level - _level_of_evil - _level_of_deception, _level);
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

bool Deciption::evil_attack() {
    _level_of_deception++;
    _level_of_evil++;
    return true;
}

bool Decepticon:act_of_kidness() {
    if(_level_of_evil != 0) _level_of_evil--;
    return true;
}


