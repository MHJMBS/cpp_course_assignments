#include <iostream>
#include <vector>
#include "exercise.h"

void pay_less(){
    
    std::vector<double> unit_prices {10.4,21.5,14.0,15.2,7.9};
    std::vector<double> number_of_items{60,20,10,30,20,50};

    //Don't modify anything above this line
    //Your code should go below this line
    
    double least_cost = unit_prices[0]*number_of_items[0];
    for(int i = 1; i < unit_prices.size(); i++) {
        double new_cost = unit_prices[i]*number_of_items[i];
        least_cost = least_cost > new_cost ? new_cost : least_cost;
    }

    //Your code should go above this line
    //Don't modify anything below this line

    std::cout << "The least I can pay is  : " << least_cost;
}