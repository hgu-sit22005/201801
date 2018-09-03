#include <iostream>
#include <string>

#include "fsms.h"

int main()
{
    std::string name;
    std::cout << "Enter company name: ";
    std::cin >> name;
    FSMS fsms(name);
    
    fsms.run();
    return 0;
}