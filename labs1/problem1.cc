#include <iostream>

#include "problem1.h"


void example_function() {
    std::cout << "Call functiopn example_function()" << std::endl;

}

void Answer1() {
    std::cout << "Problem 1" << std::endl;
    std::cout << "solution1" << std::endl;
    char var1, var2;
    std::cout << "Input first variable (char): "; std::cin >> var1;
    std::cout << "Input second variable (char): "; std::cin >> var2;

    int V = var1;
    var1 = var2;
    var2 = V;

    std::cout << "Swapped first variable:" << var1 << std::endl << "Swapped second variable:" << var2 << std::endl;


//Q2
    std::cout << "\n\nsolution2" << std::endl;
    int num1, num2;
    bool sign1, sign2;
    std::cout << "Input first number: "; std::cin >> num1;
    std::cout << "Input second number: "; std::cin >> num2;

    if (num1 < 0) {
        sign1 = false;
    } else {
        sign1 = true;
    }

    if (num2 < 0) {
        sign2 = false;
    } else {
        sign2 = true;
    }

    if (sign1 == sign2) {
        std::cout << "Both number have same sign" << std::endl;
    } else {
        std::cout << "Both number have different sign" << std::endl;
    }



//Q3
    std::cout << "\n\nsolution3" << std::endl;

    bool evensign1, evensign2;
    std::cout << "Input first number: "; std::cin >> num1;
    std::cout << "Input second number: "; std::cin >> num2;

    if (num1 % 2 == 0) {
        evensign1 = true;
    } else {
        evensign1 = false;
    }

    if (num2 % 2 == 0) {
        evensign2 = true;
    } else {
        evensign2 = false;
    }

    if (evensign1 == true) {
        std::cout << num1 << " is even number" << std::endl;
    } else { std::cout << num1 << " is odd number" << std::endl; }

    if (evensign2 == true) {
        std::cout << num2 << " is even number" << std::endl;
    } else { std::cout << num2 << " is odd number" << std::endl; }


//Q4

    std::cout << "\n\nsolution4" << std::endl;
    std::cout << "First" << std::endl;


//Q5
    std::cout << "\n\nsolution5" << std::endl;
    char x;
    std::cout << "===Choose your menu below===" << std::endl;
    std::cout << "Menu 1: Displaying 3 words of -First-" << std::endl;
    std::cout << "Menu 2: Displaying 2 words of -Second-" << std::endl;
    std::cout << "Your answer (a = Menu 1 / b = Menu 2): "; std::cin >> x;

    if (x == 'a') {
        for(int i=0; i<3; i++)
        {
            std::cout << "First" << std::endl;
        }
    }
    if (x == 'b') {
        for (int i=0; i<2; i++)
        {
            std::cout << "Second" << std::endl;
        }
    }
    if (x != 'a' && x != 'b') {
        std::cout << "Wrong answer!" << std::endl;
    }
}
