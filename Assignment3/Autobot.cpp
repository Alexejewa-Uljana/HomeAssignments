//Алексеева Ульяна st129990@student.spbu.ru


#include <iostream>
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Autobot.h"

Autobot::Autobot() {
    _level_of_kidness = 100;
    _happiness_level = 100;
    _level_of_greatness = 100;
}

void Autobot::setLevel_of_kidness(uint level_of_kidness) {
    _level_of_kidness = level_of_kidness;
}

uint Autobot::getLevel_of_kidness() {
    return _level_of_kidness;
}

void Autobot::setHappiness_level(uint happiness_level) {
    _happiness_level = happiness_level;
}

uint Autobot::getHappiness_level() {
    return _happiness_level;
}

void Autobot::setLevel_of_greatness(uint level_of_greatness) {
    _level_of_greatness = level_of_greatness;
}

uint Autobot::getLevel_of_greatness() {
    return _level_of_greatness;
}

bool Autobot::attack_against_evil() {
    _level_of_greatness++;
    _happiness_level++;
    return true;
}

bool Autobot::attack_against_decepticon() {
    _level_of_greatness++;
    return true;
}
