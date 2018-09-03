#include "problem02.h"

#include <iostream>

// Notice!!
// You should not modify the problem01_main.cpp file
// If you modify the header file you will get zero point.

int main(int argc, char** argv)
{
    ItemContainer ic(10);
    
    ic.add_item((char*)"a", 10);
    ic.add_item((char*)"b", 7);
    ic.add_item((char*)"c", 8);
    ic.add_item((char*)"d", 9);
    ic.add_item((char*)"j", 1);
    ic.add_item((char*)"f", 2);
    ic.add_item((char*)"g", 3);
    ic.add_item((char*)"h", 5);
    ic.add_item((char*)"i", 4);
    ic.add_item((char*)"e", 6);
    ic.print();
    
    std::cout << "------------------" << std::endl;
    ic.sort_by_name();
    ic.print();
    
    std::cout << "------------------" << std::endl;
    ic.sort_by_cost();
    ic.print();
    return 0;
}