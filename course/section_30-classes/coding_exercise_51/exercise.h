#ifndef EXERCISE_H
#define EXERCISE_H

class Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}

    Point& set_x(double x) {
        m_x = x;
        return *this;
    }
    Point& set_y(double y) {
        m_y = y;
        return *this;
    }

	double x(){
		return m_x;
	}
	double y(){
		return m_y;
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p);

#endif // _EXERCISE_H
