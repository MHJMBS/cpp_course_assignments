#include "exercise.h"
#include <iostream>

void func(){
    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    
    static int count = 0;
    count++;
    std::cout << count << ' ';
    //YOUR CODE SHOULD GO ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE
}

void do_work(unsigned int n){
    for(unsigned int i{0} ; i < n; ++i){
        func();
    }
}