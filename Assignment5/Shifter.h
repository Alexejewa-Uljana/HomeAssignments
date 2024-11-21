// Алексеева Ульяна st129990@student.spbu.ru

#pragma once
#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"

#ifndef SHIFTER_H
#define SHIFTER_H

class Shifter: public Transformer
{
public:
    Shifter();
    Shifter(uint size, uint weight);
    void transform() override;
    void ulta() override;
    void openFire() override;
    void setSize(uint size);
    uint getSize();
    void setWeight(uint weight);
    uint getWeight();
    bool transform_size();
    bool transform_weight();
    friend std::ostream & operator<<(std::ostream & os, Shifter& shifter);
    bool operator<(Shifter& other);
    bool operator>(Shifter& other);
private:
    uint _size;
    uint _weight;
};

#endif
