// Alexejewa Uljana

#include <iostream>
#include <sstream>
#include <string>
#include <header.h>

int rpn(const std::string& input)
{
    int* stack = new int[100];
    int* top_stack = stack;
    std::stringstream ss(input);
    std::string sss;
    while(ss >> sss)
    {
        if(sss == "+"){
            int sum = *top_stack + *(top_stack - 1);
            top_stack--;
            stack[top_stack - stack] = sum;
        }
        else if(sss == "-"){
            int sum = *top_stack - *(top_stack - 1);
            top_stack--;
            stack[top_stack - stack] = sum;
        }
        else if(sss == "*"){
            int sum = *top_stack * *(top_stack - 1);
            top_stack--;
            stack[top_stack - stack] = sum;
        }
        else if(sss == "/"){
            int sum = *top_stack / *(top_stack - 1);
            top_stack--;
            stack[top_stack - stack] = sum;
        }
        else
        {
            top_stack++;
            stack[top_stack - stack] = std::stoi(sss);
        }

    }
    return stack[0];
}
