#include <vector>
#include <iostream>
#include "exercise.h"

void print_multiples_of_3(){
    
    
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    //Don't modify anything above this line
    //Your code should go below this line
    
    for(int num : numbers) {
        if(num % 3 == 0) std::cout << num << ' ';
    }
    
    //Your code should go above this line
    //Don't modify anything below this line
    
}