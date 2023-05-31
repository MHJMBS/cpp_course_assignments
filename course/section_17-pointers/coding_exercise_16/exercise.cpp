#include "exercise.h"

int*  minimum_address( int data[], unsigned int size){

  int * min_address;

  // Don't modify anything above this line
  //Your code should go below this line
  //REMEMBER !ONLY POINTER ARITHMETIC SHOULD BE USED TO ACCESS ARRAY DATA

  int ans = data[0];
  min_address = &data[0];
  
  for(int i = 1; i < size; i++) {
      if(ans > data[i]) {
          ans = data[i];
          min_address = &data[i];
      }
  }
  
  //Your code should go above this line
  //Don't modify anything below this line

  return min_address;
}