#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

namespace CU{ // CU stands for Custom Utilities. Get into the habit of wrapping  your code
                // into your own namesspace to avoid name conflicts

	class Point_nD{
		public : 
		Point_nD(std::initializer_list<double> list ) {
				m_size= list.size();
				m_data = new double[m_size];
			 	for(unsigned int i{} ;  i < m_size; ++i){
              		m_data[i] = *(list.begin() + i) ;
        		}
			
		}

		Point_nD(const Point_nD& source) {
			m_size = source.size();
			m_data = new double[m_size];
			for(unsigned int i{} ;  i < m_size; ++i){
              		m_data[i] = source.at(i) ;
        	}
		}


		~Point_nD(){
			delete[] m_data;
		}

		double at(unsigned int index) const{
			return m_data[index];
		}
		void set( unsigned int index, double value){
			m_data[index] = value;
		}

		unsigned int size() const{
			return m_size;
		}

		void print() const{
			std::cout << "Point [ ";
			for(unsigned int i{} ;  i < m_size; ++i){
               std::cout << m_data[i] << " ";
        	}
			std::cout << "]";
		}
		
		//YOUR operator+ WILL GO BELOW THIS LINE
    	//YOU CAN'T ADD IN ANY MORE METHODS OTHER THAN operator+
    	//DON'T MODIFY ANYTHING ABOVE THIS LINE
        
        Point_nD operator+(const Point_nD &right_operand) {
            Point_nD result = *this;
            for(int i = 0; i < result.size(); i++) {
                result.set(i, result.at(i) + right_operand.at(i));
            }
            return result;
        }
	
    	//YOUR operator+ WILL GO ABOVE THIS LINE
    	//YOU CAN'T ADD IN ANY MORE METHODS OTHER THAN operator+
    	//DON'T MODIFY ANYTHING BELOW THIS LINE

		private : 
		unsigned int m_size;
		double* m_data;
	};
}



#endif // _EXERCISE_H
