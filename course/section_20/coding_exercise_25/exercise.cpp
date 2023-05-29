#include "exercise.h"


//Don't modify anything above this line
//Your code will go below this line
//REMEMBER THE NAME OF THE FUNCTION TO BE EXACTLY AS SPECIFIED.

unsigned int digit_sum(unsigned int num) {
    unsigned int ans = 0;
    
    while(num != 0) {
        ans += num % 10;
        num /= 10;
    }
    
    return ans;
}

//Your code will go above this line
//Don't modify anything below this line