#include "exercise.h"

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

Box::Box(double width, double length, double height) {
    m_width = width;
    m_length = length;
    m_height = height;
}

double Box::base_area() {
    return m_width * m_length;
}

double Box::volume() {
    return base_area() * m_height;
}

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE.
