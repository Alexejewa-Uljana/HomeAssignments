// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Degree.h"

Degree::Degree() {
    _degree = 0;
    _period = 0;
}

void Degree::setDegree(uint degree) {
   _degree = (_degree + degree % 360) % 360;
   _period += degree / 360;
}

uint Degree::getDegree() {
    return _degree;
}

void Degree::setPeriod(uint period) {
    _period += period;
}

uint Degree::getPeriod() {
    return _period;
}
