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

Autobot::Autobot(uint level_of_kidness, uint happiness_level, uint level_of_greatness) {
    _level_of_kidness = level_of_kidness;
    _happiness_level = happiness_level;
    _level_of_greatness = level_of_greatness;
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

std::ostream & operator<<(std::ostream & os, Autobot& autobot) {
    os << "Level: " << autobot.getLevel() << std::endl << "Strength: " << autobot.getStrength() << std::endl << "Range: " << autobot.getRange() << std::endl << "Fuel: " << autobot.getFuel() << std::endl << "Ammo: " << autobot.getAmmo() << std::endl << "Gun: " << autobot.getGun_power() << " " << autobot.getGun_strength() << std::endl << "Level of kidness: " << autobot.getLevel_of_kidness() << std::endl << "Happiness level: " << autobot.getHappiness_level() << std::endl << "Level of greatness: " << autobot.getLevel_of_greatness() << std::endl << std::endl;
    return os;
}

bool Autobot::operator<(Autobot& other) {
    return this->_happiness_level < other._happiness_level;
}

bool Autobot::operator>(Autobot& other) {
    return this->_happiness_level > other._happiness_level;
}
