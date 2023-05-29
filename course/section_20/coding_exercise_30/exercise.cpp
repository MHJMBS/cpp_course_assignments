#include "exercise.h"
#include <limits>
#include <algorithm>

int max_subsequence_sum(int sequence[] , unsigned int size){
    //YOUR CODE WILL GO BELOW THIS LINE 
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    
    int *left = new int[size];
    int *right = new int[size];
    
    left[0] = sequence[0];
    for(int i = 1; i < size; i++) {
        left[i] = std::max(sequence[i], sequence[i] + left[i-1]);
    }
    
    right[size-1] = sequence[size-1];
    for(int i = size-2; i >= 0; i--) {
        right[i] = std::max(sequence[i], sequence[i] + right[i+1]);
    }
    
    int ans = right[0];
    
    for(int i = 0; i < size-1; i++) {
        ans = std::max({ans, left[i], right[i+1], left[i] + right[i+1]});
    }
    
    delete[] left;
    delete[] right;
    
    return ans;
   
    //YOUR CODE WILL GO ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE 
}