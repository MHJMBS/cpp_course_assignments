#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class Point {
    public:
    
    double m_x;
    double m_y;
    
    double distance_to(Point p) {
        return sqrt(pow(p.m_x - m_x,2) + pow(p.m_y - m_y,2));
    }
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
