#include <iostream>

int main() {
    std::cout << "Please enter a degree value in Celsius :\n";
    double celsius;
    std::cin >> celsius;

    double fahrenheit = 9.0/5 * celsius + 32;
    std::cout << celsius << " is " << fahrenheit << " Fahrenheit\n";
}