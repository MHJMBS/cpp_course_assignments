#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point{
    //YOUR CHANGES WILL GO SOMEWHERE BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    public:
    
    friend double distance(const Point& from, const Point& to);
    
    Point(double x, double y)
    : m_x(x), m_y(y) {};

    //YOUR CHANGES WILL GO SOMEWHERE ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};


//Computes and returns the distance between to points as double
double distance(const Point& from, const Point& to);

#endif // _EXERCISE_H
