#include <iostream>
#include <cstring>
#include "exercise.h"


void extract_message( const char* src1 , const char* src2,
                        const char* src3, const char* src4){

    char* result;
    result = new char[20]; // Dynamically allocate for space
    
    //Don't modify anything above this line
    //Your code will go below this line
    
    std::strncpy(result, src1+15, 4);
    std::strncpy(result+4, src2+6, 4);
    std::strncpy(result+8, src3+11, 3);
    std::strncpy(result+11, src4+4, 4);
    result[15] = '\0';
    
    std::cout << "result : " << result;

    //Your code will go above this line
    //Don't modify anything below this line

    delete[] result;
   
}