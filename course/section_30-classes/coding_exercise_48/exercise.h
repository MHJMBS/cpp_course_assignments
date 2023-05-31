#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}
	double distance_to( Point target){
		return sqrt(pow(target.m_x - m_x, 2) + pow(target.m_y - m_y, 2) * 1.0);
	}
	
	double x() {
	    return m_x;
	}
	double y() {
	    return m_y;
	}

	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p);
#endif // _EXERCISE_H
