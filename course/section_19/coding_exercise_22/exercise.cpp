#include <string>
#include "exercise.h"

std::string build_from_raw_pieces(const char * str1, const char* str2){

    std::string result;
    
    //Don't modify anything above this line
    //Your code will go below this line
    
    result = std::string(str1) + ' ' + str2;
    
    //Your code will go above this line
    //Don't modify anything below this line
    return result;
}