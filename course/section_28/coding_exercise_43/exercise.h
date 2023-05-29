#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

template <int size, typename T>
int find_value(T collection[], T target) {
    for(int i = 0; i < size; i++) {
        if(collection[i] == target) {
            return i;
        }
    }
    return -1;
}

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

#endif // _EXERCISE_H
