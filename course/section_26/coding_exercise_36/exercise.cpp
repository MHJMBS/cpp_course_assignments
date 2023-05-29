#include <iostream>
#include "exercise.h"

//Don't modify anything above this line
//Your code will go below this line.

int odd() {
    static int number = -1;
    number += 2;
    return number;
}

void print_odds(unsigned int count) {
    for(int i = 0; i < count; i++) {
        std::cout << odd() << ' ';
    }
}

//Your code will go above this line
//Don't modify anything below this line
