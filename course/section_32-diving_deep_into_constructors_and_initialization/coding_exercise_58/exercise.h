#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class Reverser {
    int collection[5];
    
    public:
    
    Reverser(std::initializer_list<int> initializer_list) {
        for(int i = 0; i < 5; i++) {
            collection[i] = *(initializer_list.end() - 1 - i);
        }
    }
    
    void print() {
        std::cout << "Collection [";
        for(int integer : collection) {
            std::cout << integer << ' ';
        }
        std::cout << ']';
    }
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
