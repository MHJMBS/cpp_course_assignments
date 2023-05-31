#include <iostream>

int main() {
    std::cout << "Which day is today [1 : Monday,..., 7 : Sunday] :\n";
    int value;
    std::cin >> value;

    if(!(1 <= value && value <= 7)) {
        std::cout << value << " is not a valid day. Bye!\n";
        return 0;
    }

    std::string today;

    if(value == 1) today = "Monday";
    else if(value == 2) today = "Tuesday";
    else if(value == 3) today = "Wednesday";
    else if(value == 4) today = "Thursday";
    else if(value == 5) today = "Friday";
    else if(value == 6) today = "Saturday";
    else if(value == 7) today = "Sunday";

    std::cout << "How many days have passed up to today :\n";
    int days_passed;
    std::cin >> days_passed;

    value = ((value-1-days_passed)%7 + 7) % 7 + 1;

    std::string day;
    
    if(value == 1) day = "Monday";
    else if(value == 2) day = "Tuesday";
    else if(value == 3) day = "Wednesday";
    else if(value == 4) day = "Thursday";
    else if(value == 5) day = "Friday";
    else if(value == 6) day = "Saturday";
    else if(value == 7) day = "Sunday";

    std::cout << "Today is " << today << '\n';
    std::cout << "If we went " << days_passed << " days in the past we would hit a " << day << '\n';
}