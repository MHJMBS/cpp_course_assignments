 #include "exercise.h"
 
 const double* find_max_address(const double scores[], unsigned int count){

    unsigned int max_index = 0;
    double max = scores[0];
    
    for(unsigned int i{1}; i < count ; ++i){
        if(scores[i] > max){
            max = scores[i];
            max_index = i;
        }
    }
    
    return &scores[max_index];
}