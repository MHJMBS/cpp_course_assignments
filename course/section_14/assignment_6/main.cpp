#include <iostream>

int main() {
    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] :\n";
    int value;
    std::cin >> value;

    std::string day = "";
    
    if(value == 1) day = "Monday";
    else if(value == 2) day = "Tuesday";
    else if(value == 3) day = "Wednesday";
    else if(value == 4) day = "Thursday";
    else if(value == 5) day = "Friday";
    else if(value == 6) day = "Saturday";
    else if(value == 7) day = "Sunday";

    if(day == "") {
        std::cout << value << " is not a valid day. Bye!\n";
    }else {
        std::cout << "Today is " << day << ".Let's have some fun.\n";
    }
}