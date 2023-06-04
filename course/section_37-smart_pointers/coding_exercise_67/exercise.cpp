#include "exercise.h"
#include <memory>


double  unity_volume (){
    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    
    std::unique_ptr<Box> p_box = std::make_unique<Box>();
    
    //YOUR CODE WILL GO ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE
	return p_box -> volume();
}