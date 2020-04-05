#include <iostream>
#include "problem2.h"
void Answer2() {
    std::cout << "Problem 2" << std::endl;
    int d[] = {1,2,3,4,5,6,7,8,9,10};
    int k = sizeof(d)/sizeof(d[0]);

    for(int i=0; i<k; i++) {
        std::cout <<"f(" << d[i] << ") = sin(" << d[i] << ") + ln(" << d[i] << ")" << std::endl;
    }
}
