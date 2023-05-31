#include <iostream>
#include "exercise.h"


//Don't modify anything above this line
//Your code will go below this line

void show_odds(unsigned long long int num) {
    while(num != 0) {
        unsigned int digit = num % 10;
        if(digit % 2 == 1) std::cout << digit;
        num /= 10;
    }
}

//Your code will go above this line
//Don't modify anything below this line