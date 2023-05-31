#include <iostream>
#include "exercise.h"

void common_elements(int array_1[], int array_2[]){
   // REMEMBER, The input arrays array_1 and array_2 have a fixed size of 10
   
  //Don't modify anything above this line
  //Your code will go below this line
  
  int common[10];
  int common_size = 0;
  
  for(int i = 0; i < 10; i++) {
      bool is_common = false, added = false;
      
      for(int j = 0; j < 10; j++) {
          if(array_1[i] == array_2[j]) is_common = true;
      }
      
      for(int j = 0; j < common_size; j++) {
          if(common[j] == array_1[i]) added = true;
      }
      
      if(is_common && !added) {
          common[common_size] = array_1[i];
          common_size++;
      }
  }
  
  std::cout << "There are " << common_size << " common elements";
  
  if(common_size != 0) {
      std::cout << " they are : ";
      for(int i = 0; i < common_size; i++) {
          std::cout << common[i] << ' ';
      }
  }
  
  //Your code will go above this line
  //Don't modify anything after this line

}