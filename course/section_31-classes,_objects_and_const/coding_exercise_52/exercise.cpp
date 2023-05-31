

	#include "exercise.h"
	
	//YOUR MODIFICATIONS WILL GO BELOW THIS LINE
	//DON'T MODIFY ANYTHING ABOVE THIS LINE
	
	double Point::x() const {
		return m_x;
	}
	double Point::y() const {
		return m_y;
	}
	
	//YOUR MODIFICATIONS WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE




void print_point(const   Point& p){
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
}
