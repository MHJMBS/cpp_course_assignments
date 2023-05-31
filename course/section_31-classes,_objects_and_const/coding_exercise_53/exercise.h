#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

//YOUR MODIFICTIONS WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

struct Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}

	double &x()  {
		return m_x;
	}
	double &y()  {
		return m_y;
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

//YOUR MODIFICATIONS WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

void print_point(Point& p);

#endif // _EXERCISE_H
