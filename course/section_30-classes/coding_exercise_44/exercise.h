#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE.

class Box {
    public:
    
    double m_width = 1;
    double m_length = 1;
    double m_height = 1;
    
    double base_area() {
        return m_width * m_length;
    }
    
    double volume() {
        return base_area() * m_height;
    }
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
