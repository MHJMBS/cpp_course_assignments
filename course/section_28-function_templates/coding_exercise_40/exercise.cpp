#include <cstring>
#include "exercise.h"

//THE DEFINITION FOR YOUR TEMPLATE SEPCIALIZATION WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

template <>
int hunt_down<const char*> (const char *value,  const char *collection[], unsigned int size)
{
	for (unsigned int i{ 0 }; i < size; i++) {
		if (std::strcmp(collection[i],value) == 0) {
			return i; // Found it; return the index.
		}
	}
	return -1; 
}


//THE DEFINITION FOR YOUR TEMPLATE SPECIALIZATION WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE