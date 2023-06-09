#ifndef EXERCISE_H
#define EXERCISE_H
#include <cmath>


struct Point {
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point(){
	}
	double m_x{};
	double m_y{};
};

//YOUR CODE WILL BO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class Line {
    double length;
    
    public:
    
    Line(const Point &p1, const Point &p2) {
        length = sqrt(pow(p1.m_x - p2.m_x,2) + pow(p1.m_y - p2.m_y,2));
    }
    
    double operator()() {
        return length;
    }
    
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE


#endif // _EXERCISE_H
