#include <iostream>
#include <iomanip>

int main() {
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;

    std::cout << "Enter the first day of the year [1: Monday, ... 7:Sunday]: ";
    int first_day_of_week;
    std::cin >> first_day_of_week;
    first_day_of_week--;

    bool is_leap;
    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
        is_leap = true;
    }else {
        is_leap = false;
    }
    
    std::cout << "Calendar for " << year << '\n';

    for(int month = 1; month <= 12; month++) {
        std::string month_string;
        int last_day;

        if(month == 1) month_string = "January";
        else if(month == 2) month_string = "February";
        else if(month == 3) month_string = "March";
        else if(month == 4) month_string = "April";
        else if(month == 5) month_string = "May";
        else if(month == 6) month_string = "June";
        else if(month == 7) month_string = "July";
        else if(month == 8) month_string = "August";
        else if(month == 9) month_string = "September";
        else if(month == 10) month_string = "October";
        else if(month == 11) month_string = "November";
        else if(month == 12) month_string = "December";
        
        if(month == 4 || month == 6 || month == 9 || month == 11) {
            last_day = 30;
        }else if(month == 2) {
            if(is_leap) last_day = 29;
            else last_day = 28;
        }else {
            last_day = 31;
        }

        int spacing = 6;

        std::cout << "--" << month_string << ' ' << year << "--\n";
        std::cout << std::setw(spacing) << "Mon"
                  << std::setw(spacing) << "Tue"
                  << std::setw(spacing) << "Wed"
                  << std::setw(spacing) << "Thu"
                  << std::setw(spacing) << "Fri"
                  << std::setw(spacing) << "Sat"
                  << std::setw(spacing) << "Sun"
                  << '\n';

        int day = 1, curr_day_of_week = 0;
        while(day <= last_day) {
            std::cout << std::setw(spacing);
            if(curr_day_of_week == first_day_of_week) {
                std::cout << day;
                day++;
                first_day_of_week = (first_day_of_week+1)%7;
            }else {
                std::cout << "";
            }

            if(curr_day_of_week == 6) std::cout << '\n';
            curr_day_of_week = (curr_day_of_week+1)%7;
        }
        std::cout << '\n';
    }
}