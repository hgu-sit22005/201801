#include "problem01.h"

// Notice!!
// You should not modify the problem01_main.cpp file
// If you modify the header file you will get zero point.

int main(int argc, char** argv)
{
    {
        Student a = Student(1, "cbchoi", 10);
        a.print();
    }
    
    {
        Student a = Student(1, "cbchoi", 10);
        a.update_point(20);
        a.print();
    }
    
    return 0;
}