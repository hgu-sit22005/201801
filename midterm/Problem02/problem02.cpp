#include <iostream>

int numArray[3][3] = { 11, 22, 33, 44, 55, 66, 77, 88, 99};

void swap_int(int* const ptr1, int* const ptr2);


int main()
{
    std::cout<<"Array[1][2] is ";
    std::cout<<**numArray[1][2]<<std::endl;
    
    std::cout << "Swap Array[0][0] and Array[0][2] " << std::endl;
    std::cout << "Before : Array[0][0] = " << *(*(numArray)) << ", Array[0][2] = " << *(*(numArray)+2)<<std::endl;
    swap_int(numArray, numArray+2);
    std::cout << "After : Array[0][0] = " << *(*(numArray)) << ", Array[0][2] = " << *(*(numArray)+2)<<std::endl;
}

void swap_int(int *ptr1, int *ptr2)
{
    int **temp = **ptr1;
    **ptr1 = **ptr2;
    **ptr2 = **temp;
}