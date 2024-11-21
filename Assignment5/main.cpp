// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Shifter.h"
#include <vector>

int main(int argc, char* argv [])
{
    Transformer transformer1;
    transformer1.transform();
    transformer1.openFire();
    transformer1.ulta();
    Autobot autobot1;
    autobot1.transform();
    autobot1.openFire();
    autobot1.ulta();
    Decepticon decepticon1;
    decepticon1.transform();
    decepticon1.openFire();
    decepticon1.ulta();
    Shifter shifter1;
    shifter1.transform();
    shifter1.openFire();
    shifter1.ulta();
    Transformer* transformer2 = new Transformer;
    transformer2->transform();
    transformer2->openFire();
    transformer2->ulta();
    Autobot* autobot2 = new Autobot;
    autobot2->transform();
    autobot2->openFire();
    autobot2->ulta();
    Decepticon* decepticon2 = new Decepticon;
    decepticon2->transform();
    decepticon2->openFire();
    decepticon2->ulta();
    Shifter* shifter2 = new Shifter;
    shifter2->transform();
    shifter2->openFire();
    shifter2->ulta();
    std::vector<Transformer*> transformers(12);
    for(int i = 0; i < 3; ++i) transformers[i] = new Transformer;
    for(int i = 0; i < 3; ++i) transformers[i + 3] = new Autobot;
    for(int i = 0; i < 3; ++i) transformers[i + 6] = new Decepticon;
    for(int i = 0; i < 3; ++i) transformers[i + 9] = new Shifter;
    for(int i = 0; i < 12; ++i)
    {
        transformers[i]->transform();
        transformers[i]->ulta();
        transformers[i]->openFire();
    }
    return 0;
}
