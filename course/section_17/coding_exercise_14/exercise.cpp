#include "exercise.h"

int*  maximum_address( int data[], unsigned int size){

  int * max_address;
  
  //Don't modify anything above this line
  //Your code will go below this line
  int ans = data[0];
  max_address = &data[0];
  
  for(int i = 1; i < size; i++) {
    if(data[i] > ans) {
        ans = data[i];
        max_address = &data[i];
    }    
  }

  //Your code should go above this line
  //Don't modify anything after this line
  return max_address;
}