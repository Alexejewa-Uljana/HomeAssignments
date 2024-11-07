//Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"


Transformer::Transformer() {
    _ammo = 100;
    _fuel = 100;
    _range = 100;
    _strength = 100;
    _level = 1;
    _gun = new Gun();
    _gun -> setPower(_ammo + _fuel + _range + _strength + _level);
    _gun -> setStrength(_level);
}

Transformer::Transformer(uint level, uint strength, uint range, uint fuel, uint ammo, Gun* gun) {
    _ammo = ammo;
    _fuel = fuel;
    _range = range;
    _strength = strength;
    _level = level;
    _gun = new Gun();
    _gun -> setPower(gun->getPower());
    _gun -> setStrength(gun->getStrength());
}

Transformer::~Transformer() {
    delete _gun;
}

uint Transformer::getGun_power() {
    return _gun -> getPower();
}

uint Transformer::getGun_strength() {
    return _gun -> getStrength();
}

void Transformer::setAmmo(uint ammo) {
    _ammo = ammo;
}

uint Transformer::getAmmo() {
    return _ammo;
}


void Transformer::setFuel(uint fuel) {
    _fuel = fuel;
}

uint Transformer::getFuel() {
    return _fuel;
}


void Transformer::setRange(uint range) {
    _range = range;
}

uint Transformer::getRange() {
    return _range;
}


void Transformer::setStrength(uint strength) {
    _strength = strength;
}

uint Transformer::getStrength() {
    return _strength;
}


void Transformer::setLevel(uint level) {
    _level = level;
}

uint Transformer::getLevel() {
    return _level;
}


bool Transformer::fire() {
    if(_ammo > 0) {
        _ammo--;
    }
    _gun -> attack();
    return true;
}


bool Transformer::move() {
    if(_fuel > 0) {
        _fuel--;
    }
    return true;
}

bool Transformer::turn(Degree degree) {
    if(_ammo > (degree.getDegree() + 360 * degree.getPeriod())) {
        _ammo -= (degree.getDegree() + 360 * degree.getPeriod());
    }
    return true;
}


bool Transformer::jump() {
    if(_fuel > 0) {
        _fuel--;
    }
    return true;
}


bool Transformer::ultimate() {
    if(_fuel > 0) {
        _fuel--;
    }
    return true;
}


bool Transformer::transform() {
    _strength++;
    _level++;
    _range++;
    return true;
}

std::ostream & operator<<(std::ostream & os, Transformer& transformer) {
    os << "Level: " << transformer.getLevel() << std::endl << "Strength: " << transformer.getStrength() << std::endl << "Range: " << transformer.getRange() << std::endl << "Fuel: " << transformer.getFuel() << std::endl << "Ammo: " << transformer.getAmmo() << std::endl << "Gun: " << transformer.getGun_power() << " " << transformer.getGun_strength() << std::endl << std::endl;
    return os;
}

bool Transformer::operator<(Transformer& other) {
    return this->_level < other._level;
}

bool Transformer::operator>(Transformer& other) {
    return this->_level > other._level;
}
