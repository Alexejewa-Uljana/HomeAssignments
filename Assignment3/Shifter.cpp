// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Transformer.h"
#include "Gun.h"
#include "Shifter.h"

Shifter::Shifter() {
    _ammo = 100;
    _fuel = 100;
    _range = 100;
    _strength = 100;
    _level = 1;
    _size = 100;
    _weight = 100;
    _gun = new Gun(_ammo + _fuel + _range + _strength + _level + _size + _weight, _level);
}

void Shifter::setSize(uint size) {
    _size = size;
}

uint Shifter::getSize() {
    return _size;
}

void Shifter::setWeight(uint weight) {
    _weight = weight;
}

uint Shifter::getWeight() {
    return _weight;
}

bool Shifter::transform_size() {
    _size++;
    return true;
}

bool Shifter::transform_weight() {
    _weight++;
    return true;
}

