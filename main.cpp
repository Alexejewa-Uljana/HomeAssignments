//Uljana Alexejewa st129990@student.spbu.ru Practice-1

#include <iostream>
#include <hello.h>

int main(int argc, char* argv[])
{
    practice1::HelloName();
    std::string name;
    std::cin >> name;
    while(name != "End")
    {
        practice1::HelloName(name);
        std::cin >> name;
    }
    return 0;
}
