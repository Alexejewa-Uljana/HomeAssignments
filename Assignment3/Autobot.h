// Алексеева Ульяна st129990@student.spbu.ru

#pragma once
#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"


class Autobot: public Transformer {
public:
    Autobot();
    void setLevel_of_kidness(uint level_of_kidness);
    uint getLevel_of_kidness();
    void setHappiness_level(uint happiness_level);
    uint getHappiness_level();
    void setLevel_of_greatness(uint level_of_greatness);
    uint getLevel_of_greatness();
    bool transform();
    bool attack_against_evil();
    bool attack_against_decepticon();
private:
    uint _level_of_kidness;
    uint _happiness_level;
    uint _level_of_greatness;
};
