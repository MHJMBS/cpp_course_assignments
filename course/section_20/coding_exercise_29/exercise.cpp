#include "exercise.h"
#include <iostream>

void insertion_sort(int * array, unsigned int size){
//YOUR CODE WILL GO BELOW THIS LINE 
//DON'T MODIFY ANYTHING ABOVE THIS LINE

    for(int i = 0; i < size; i++) {
        int key = array[i], new_index = -1;
        
        for(int j = i-1; j >= 0; j--) {
            if(array[j] > key) {
                array[j+1] = array[j];
                new_index = j;
            }
        }
        
        if(new_index != -1) {
            array[new_index] = key;
        }
    }
    
//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE
}

void print_array(int* arr, unsigned int n) 
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}