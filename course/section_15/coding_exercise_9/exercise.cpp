#include <iostream>
#include "exercise.h"

void multiples_of_19(){
    
    //Don't modify anything above this line
    //Your code will go below this line
    
    int curr = 19;
    while(curr <= 1000) {
        if(curr >= 100) std::cout << curr << ' ';
        curr += 19;
    }

   //Your code will go above this line
   //Don't modify anything below this line
}