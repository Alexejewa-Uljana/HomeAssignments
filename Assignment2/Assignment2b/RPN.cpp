// Alexejewa Uljana st129990@student.spbu.ru

#include <iostream>
#include <sstream>
#include <string>
#include <header.h>

double rpn(const std::string& input)
{
    double* stack = new double[1];
    int current_size_stack = 1;
    double* top_stack = stack;
    std::stringstream s(input);
    std::string current;
    while(s >> current)
    {
        if(current == "+"){
            double sum = *top_stack + *(top_stack - 1);
            top_stack--;
            *top_stack = sum;
        }
        else if(current == "-"){
            double diff = *(top_stack - 1) - *top_stack;
            top_stack--;
            *top_stack = diff;
        }
        else if(current == "*"){
            double multi = *top_stack * *(top_stack - 1);
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
            double* new_stack = new double[current_size_stack + 1];
            std::copy(stack, stack + current_size_stack, new_stack);
            double* t = stack;
            stack = new_stack;
            delete [] t;
            current_size_stack++;
            top_stack++;
            *top_stack =  std::stod(current);
        }

    }
    double answer = stack[0];
    delete[] stack;
    delete top_stack;
    return stack[0];
}
