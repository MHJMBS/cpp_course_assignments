#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point{
    //YOUR CHANGES WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE TIS LINE
	public:
	
	friend class ShapeFactory;
	
	Point(double x, double y)
	: m_x(x), m_y(y) {};
	//YOUR CHANGES WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};



class ShapeFactory{
	public : 
	double distance(const Point& from, const Point& to){
	return  std::sqrt(pow(to.m_x - from.m_x, 2) + pow(to.m_y - from.m_y, 2) * 1.0);
    }
};


#endif // _EXERCISE_H
