#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point{
	public : 
	//methods
	Point(double x, double y) {
	    m_x = x;
	    m_y = y;
	}
	
	double distance_to( Point target){
		return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

#endif // _EXERCISE_H
