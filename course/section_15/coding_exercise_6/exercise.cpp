#include <iostream>
#include "exercise.h"

void print_uppercase(){
            for( unsigned char i{0}; i< 255 ; ++i){
                
            //Don't modify anything above thie line
            //Your code goes below this line

            if('A' <= i && i <= 'Z') {
                std::cout << i;
                if(i != 'Z') std::cout << ' ';
            }

            //Your code goes above this line
            //Don't modify anything after this line
        }
}