// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"


class Decepticon: public Transformer
{
public:
    Decepticon();
    void setLevel_of_evil(uint level_of_evil);
    uint getLevel_of_evil();
    void setLevel_of_deception(uint level_of_deception);
    uint getLevel_of_deception();
    bool transform();
    bool evil_attack();
    bool act_of_kidness();
private:
    uint _level_of_evil;
    uint _level_of_deception;
};
