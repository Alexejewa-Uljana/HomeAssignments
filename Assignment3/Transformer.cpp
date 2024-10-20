//Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Transformer.h"


void Transformer::setAmmo(uint ammo) {
    _ammo = ammo;
}

uint Transformer::getAmmo(){
    return _ammo;
}


void Transformer::setFuel(uint fuel) {
    _fuel = fuel;
}

uint Transformer::getFuel(){
    return _fuel;
}


void Transformer::setRange(uint range) {
    _range = range;
}

uint Transformer::getRange(){
    return _range;
}


void Transformer::setStrength(uint strength) {
    _strength = strength;
}

uint Transformer::getStrength(){
    return _strength;
}


void Transformer::setLevel(uint level) {
    _level = level;
}

uint Transformer::getLevel(){
    return _level;
}


bool Transformer::fire() {
    _ammo--;
    return true;
}


bool Transformer::move() {
    _fuel--;
    return true;
}


bool Transformer::turn(Direction dir) {
    // idk
}


bool Transformer::jump() {
    _fuel--;
    return true;
}


bool Transformer::ultimate() {
    __fuel--;
}


bool Transformer::transform() {
    _strength++;
    _level++;
    _range++;
    return true;
}

