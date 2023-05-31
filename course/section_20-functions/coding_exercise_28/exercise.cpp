#include <iostream>
#include "exercise.h"

//Don't modify anything above this line
//Your code will go below this line

int contains_character( const char* str, unsigned int size, char c) {
    int ans = -1;
    
    for(int i = 0; i < size; i++) {
        if(str[i] == c) {
            ans = i;
            break;
        }
    }
    
    return ans;
}

void find_character(const char* str, unsigned int size, char c) {
    int ans = contains_character(str, size, c);
    
    if(ans != -1) {
        std::cout << "Found character " << c << " at index " << ans;
    }else {
        std::cout << "Could not find the character " << c << " in " << str;
    }
}

//Your code will go above this line
//Don't modify anything below this line