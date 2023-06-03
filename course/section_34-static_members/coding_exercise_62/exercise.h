#pragma once

//YOUR MODIFICATIONS SHOULD SHOW UP SOMEWHERE BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE.
class Point{
	public : 
	//methods
	Point() = delete;
	Point(double x, double y)
		: m_x(x), m_y(y){
        s_point_count++;
	}

	Point(const Point& p)
	 : m_x(p.x()), m_y(p.y())
	{
	    s_point_count++;
	}
	
	~Point() {
	    s_point_count--;
	}



	void set_x(double x){
		m_x = x;
	}

	void set_y(double y){
		m_y = y;
	}

	double x() const   {
		return m_x;
	}
	double y() const   {
		return m_y;
	}
    
    inline static unsigned int s_point_count = 0;
	//member variables
	private : 

	double m_x{1};
	double m_y{1};
};
//YOUR MODIFICATIONS SHOULD SHOW UP SOMEWHERE ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE