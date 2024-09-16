//Uljana Alexejewa st129990@student.spbu.ru Practice-1

#include <iostream>
#include <hello.h>

void practice1::HelloName(){
    HelloName("world");
}

void practice1::HelloName(const std::string &name)
{
    std::cout << "Hello, " << name << "!" << std::endl;
}
