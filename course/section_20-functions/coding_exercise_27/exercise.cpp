#include "exercise.h"

//Don't modify anything above this line
//Your code will go below this line
//Your function definition will show up in this header file

bool is_palindrome(unsigned long long int num) {
    while(num >= 10) {
        int first, last = num % 10, sig = 10;
        
        while(num / sig >= 10) {
            sig *= 10;
        }
        
        first = num / sig;
        
        if(first != last) return false;
        num -= sig;
        num %= 10;
    }
    
    return true;
}

//Your code will go above this line
//Don't modify anything below this line