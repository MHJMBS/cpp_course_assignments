#include <iostream>

int main() {
    int x, y;
    std::cout << "Type in your x location :\n";
    std::cin >> x;
    std::cout << "Type in your y location :\n";
    std::cin >> y;

    if(-10 <= x && x <= 10 && -5 <= y && y <= 5) {
        std::cout << "You are completely surrounded. Don't move!\n";
    }else {
        std::cout << "You're out of reach!\n";
    }
}