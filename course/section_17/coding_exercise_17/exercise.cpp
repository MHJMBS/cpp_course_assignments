#include <iostream>
#include "exercise.h"


void merge_arrays(int data1[], int data2[],
           unsigned int size1, unsigned int size2){

    //Don't modify anything above this line
    //Your code will go below this line
    
    int *new_array = new int[size1 + size2];
    
    for(int i = 0; i < size1; i++) {
        new_array[i] = data1[i];
    }
    
    for(int i = 0; i < size2; i++) {
        new_array[size1+i] = data2[i];
    }
    
    for(int i = 0; i < size1 + size2; i++) {
        std::cout << new_array[i] << ' ';
    }
    
    delete[] new_array;
    
    //Your code will go above this line
    //Don't modify anything below this line


}