#ifndef EXERCISE_H
#define EXERCISE_H

template <typename T>
int hunt_down(const T& value, const T* collection, unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (collection[i] == value) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}


//THE DECLARATION OF YOUR OVERLOAD WILL GO BELOW THIS LINE

int hunt_down(const char* value, const char *collection[], unsigned int size);

//DON'T MODIFY ANYTHING ABOVE THIS LINE.

#endif // _EXERCISE_H

