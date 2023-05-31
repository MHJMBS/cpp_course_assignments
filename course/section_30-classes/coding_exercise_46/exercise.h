#ifndef EXERCISE_H
#define EXERCISE_H

class Box {

	public : 
	//methods
	Box(double witdh, double length, double height) {
	    m_width = witdh;
	    m_length = length;
	    m_height = height;
	}
	
	double base_area(){
		return m_width * m_length;
	}
	double volume(){
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};


#endif // _EXERCISE_H
