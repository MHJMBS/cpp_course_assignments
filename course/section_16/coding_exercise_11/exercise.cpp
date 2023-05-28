#include <iostream>
#include "exercise.h"

bool is_collection_sorted(int numbers[], unsigned int collection_size){


  // Don't modify anything above this line
  //Your code will go below this line
    
    bool sorted = true;
    for(int i = 1; i < collection_size; i++) {
        if(numbers[i-1] >= numbers[i]) sorted = false;
    }
    
  //Your code will go above this line
  //Don't modify anything below this line

  return sorted;
}
