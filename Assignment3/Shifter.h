// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Gun.h"
#include "Degree.h"
#include "Transformer.h"

class Shifter: public Transformer {
public:
    Shifter();
    bool transform();
    void setSize(uint size);
    uint getSize();
    void setWeight(uint weight);
    uint getWeight();
    bool transform_size();
    bool transform_weight();
private:
    uint _size;
    uint _weight;
};
