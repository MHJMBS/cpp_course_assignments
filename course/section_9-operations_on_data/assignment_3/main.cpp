#include <iostream>

int main() {
    std::cout << "Welcome to box calculator. Please type in length, width and height information :\n";
    
    double length, width, height;
    std::cout << "length: ";
    std::cin >> length;
    std::cout << "width: ";
    std::cin >> width;
    std::cout << "height: ";
    std::cin >> height;

    double area = width*length, volume = area*height;
    std::cout << "The base area is : " << area << '\n';
    std::cout << "The base volume is : " << volume << '\n';
}