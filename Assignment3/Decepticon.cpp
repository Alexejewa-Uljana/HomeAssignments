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


