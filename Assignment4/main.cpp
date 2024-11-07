// Алексеева Ульяна st129990@student.spbu.ru

#include <iostream>
#include "Transformer.h"
#include "Gun.h"
#include "Degree.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Shifter.h"

int main(int argc, char* argv [])
{
    //Shifter f1, f2;
    Decepticon k1, k2(200, 200);
    Autobot e1, e2(200, 200, 200);
    Gun b1, b2(200, 200);
    Degree c1, c2(200, 200);
    Transformer a;
    Transformer p;
    Transformer a3(200, 200, 200, 200, 200, &b1);
    std::cout << a;
    std::cout << b1;
    std::cout << c1;
    std::cout << e1;
    std::cout << k1;
    std::cout << f1;
    std::cout << (a > p);
    std::cout << (e1 < e2);
    std::cout << (k1 < k2);
    std::cout << (f1 < f2);
    std::cout << (c1 < c2);
    std::cout << (b1 > b2);
    std::cout << a3;
    std::cout << e2;
    std::cout << k2;
    std::cout << b2;
    std::cout << c2;
    return 0;
}
