#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE SHOULD GO BELOW THIS LINE AS A SINGLE FUNCTION TEMPLATE
//DON'T MODIFY ANYTHING ABOVE THIS LINE.

template <typename T>
int hunt_down(const T &value, const T *collection, size_t size) {
    for(size_t i = 0; i < size; i++) {
        if(collection[i] == value) return i;
    }
    return -1;
}

//YOUR CODE SHOULD GO ABOVE THIS LINE AS A SINGLE FUNCTION TEMPLATE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H