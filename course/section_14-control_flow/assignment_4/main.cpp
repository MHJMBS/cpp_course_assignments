#include <iostream>

int main() {
    std::cout << "Please type in an integral value :\n";
    int value;
    std::cin >> value;

    if(value % 2 == 0) {
        std::cout << value << " is even\n";
    }else {
        std::cout << value << " is odd\n";
    }
}