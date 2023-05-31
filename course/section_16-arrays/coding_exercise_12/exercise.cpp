#include <iostream>
#include "exercise.h"

void hunt_for_vowels(char message[], unsigned int size){
    

  unsigned int vowel_count{};//Initialized to zero
  
  //Don't modify anything above this line
  //Your code should go below this line

  for(int i = 0; i < size; i++) {
      if(message[i] == 'a' || message[i] == 'e' ||
      message[i] == 'i' || message[i] == 'o' || message[i] == 'u') {
          vowel_count++;
      }
  }
  
  //Your code should go above this line
  //Don't modify anything below this line
  
  
  std::cout << "The string : " << message << " has " << vowel_count << " vowels";
    
}