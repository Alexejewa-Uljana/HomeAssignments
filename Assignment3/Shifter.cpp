// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"
#include "Shifter.h"


Shifter::Shifter() {
    _size = 100;
    _weight = 100;
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

