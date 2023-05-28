#include <string>
#include "exercise.h"

std::string who_s_the_greatest(std::string data[] , unsigned int size){
    
    std::string result;
    
    //Don't modify anything above this line
    //Your code will go below this line
    
    for(int i = 0; i < size; i++) {
        if(data[i] > result) result = data[i];
    }

    //Your code will go above this line
    //Don't modify anything below this line
  
    return result;
}