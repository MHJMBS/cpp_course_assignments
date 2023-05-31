#include <iostream>
#include "exercise.h"

void unique_numbers( int numbers[], unsigned int collection_size){
    
   //Don't modify anthing above this line
   //Your code should go below this line
    
   bool to_print[20];
    for(int i = 0; i < 20; i++) to_print[i] = true;
    
    int ans_counter = 0;
    for(int i = 0; i < collection_size; i++) {
        for(int j = i-1; j >= 0; j--) {
            if(numbers[j] == numbers[i]) {
                to_print[i] = false;
                break;
            }
        }
        if(to_print[i]) ans_counter++;
    }
    
    std::cout << "The collection contains " << ans_counter << " unique numbers, they are : ";
    for(int i = 0; i < collection_size; i++) {
        if(to_print[i]) std::cout << numbers[i] << ' ';
    }
  
  //Your code should go above this line
  //Don't modify anything below this line
    
    
    
    
}