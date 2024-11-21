// Алексеева Ульяна st129990@student.spbu.ru

#pragma once
#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"

#ifndef DECEPTICON_H
#define DECEPTICON_H

class Decepticon: public Transformer
{
public:
    Decepticon();
    Decepticon(uint level_of_evil, uint level_of_deception);
    void setLevel_of_evil(uint level_of_evil);
    uint getLevel_of_evil();
    void setLevel_of_deception(uint level_of_deception);
    uint getLevel_of_deception();
    void transform() override;
    void ulta() override;
    void openFire() override;
    bool evil_attack();
    bool act_of_kidness();
    friend std::ostream & operator<<(std::ostream & os, Decepticon& decepticon);
    bool operator<(Decepticon& other);
    bool operator>(Decepticon& other);
private:
    uint _level_of_evil;
    uint _level_of_deception;
};

#endif
