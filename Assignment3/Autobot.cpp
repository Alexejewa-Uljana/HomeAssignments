//Алексеева Ульяна st129990@student.spbu.ru


#include <iostream>
#include "Transformer.h"
#include "Autobot.h"

Autobot::Autobot() {
    _ammo = 100;
    _fuel = 100;
    _range = 100;
    _strength = 100;
    _level = 1;
    _level_of_kidness = 100;
    _happiness_level = 100;
    _level_of_greatness = 100;
    _gun = new Gun(_ammo + _fuel + _range + _strength + _level + _level_of_kidness + _happiness_level + _level_of_greatness, _level);
}

void Transformer::setLevel_of_kidness(uint level_of_kidness) {
    _level_of_kidness = level_of_kidness;
}

uint Transformer::getLevel_of_kidness() {
    return _level_of_kidness;
}

void Transformer::setHappiness_level(uint happiness_level) {
    _happines__level = happiness_level;
}

uint Transformer::getHappines_level() {
    return _happines_level;
}

void Transformer::setLevel_of_greatness(uint level_of_greatness) {
    _level_of_greatness = level_of_greatness;
}

uint Transformer::getLevel_of_greatness() {
    return _level_of_greatness;
}

bool Autobot::attack_against_evil() {
    _level_of_greatnes++;
    _happiness_level++;
    return true;
}

bool Autobot::attack_against_decepticon() {
    _level_of_greatness++;
    return true;
}
