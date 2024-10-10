// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>
#include <sstream>
#include <string>
#include "header.h"

double Assignment2b::rpn(const std::string& input)
{
    std::basic_string <char>::size_type size = input.length();
    double* stack = new double[size];
    double* top_stack = stack; // pointer on the top of stack
    std::stringstream s(input);
    std::string current;
    s >> current; // read first number
    *top_stack = std::stoi(current); // add first number in stack
    while(s >> current)
    {
        if(current == "+"){
            double sum = *(top_stack - 1) + *top_stack;
            top_stack--;
            *top_stack = sum;
        }
        else if(current == "-"){
            double diff = *(top_stack - 1) - *top_stack;
            top_stack--;
            *top_stack = diff;
        }
        else if(current == "*"){
            double multi = *(top_stack - 1) * *top_stack;
            top_stack--;
            *top_stack = multi;
        }
        else if(current == "/"){
            double div = *(top_stack - 1) / *top_stack;
            top_stack--;
            *top_stack = div;
        }
        else
        {
            top_stack++;
            *top_stack = std::stoi(current);
        }
    }
    double answer = stack[0];
    delete[] stack;
    return answer;
}
