#include "exercise.h"
#include <cstring> // THIS IS ONE OF THE INCLUDES YOU CAN USE TO COMPARE C-Strings, BUT FEEL FREE TO EVEN USE OTHER METHODS.

//THE DEFINITION OF YOUR OVERLOAD WILL GO BELOW THIS LINE

int hunt_down(const char* value, const char *collection[], unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (std::strcmp(collection[i],value) == 0) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}

//DON'T MODIFY ANYTHING ABOVE THIS LINE.