#include "exercise.h"

//Don't modify anything above this line.
//Your code will go below this line

void is_sum_even(int data[], unsigned int size, bool &result) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += data[i];
    }
    result = sum % 2 == 0;
}

//Your code will go above this line
//Don't modify anything below this line