// Alexejewa Uljana st129990@student.spbu.ru


#include <iostream>
#include <string>
#include <header.h>

int main(int argc, char* argv [])
{
    std::string s;
    getline(std::cin, s);
    int x = Assignment2b::rpn(s);
    std::cout << x;
    return 0;
}
