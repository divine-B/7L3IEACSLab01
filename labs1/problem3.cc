#include <iostream>
#include "problem3.h"

void swap1(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int& x, int& y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//pointer swapping
void swapversion1()
{
    std::cout << "Problem 3" << "\nSwap Version 1" << std::endl;
    int var1, var2;
    std::cout << "Input integer 1: "; std::cin >> var1;
    std::cout << "Input integer 2: "; std::cin >> var2;

    swap1(&var1, &var2);

    std::cout << "swapped integer 1: " << var1 << std::endl;
    std::cout << "swapped integer 2: " << var2 << std::endl;

}

//reference swapping
void swapversion2()
{
    std::cout << "\nSwap Version 2" << std::endl;
    int var1, var2;
    std::cout << "Input integer 1: "; std::cin >> var1;
    std::cout << "Input integer 2: "; std::cin >> var2;

    swap2(var1, var2);

    std::cout << " swapped integer 1: " << var1 << std::endl;
    std::cout << " swapped integer 2: " << var2 << std::endl;

}
