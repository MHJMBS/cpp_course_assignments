#include <iostream>

int main() {
    std::cout << "Please type in your age :\n";
    int age;
    std::cin >> age;

    if(age < 21) {
        std::cout << "Sorry, you are too young for the treatment\n";
    }else if(age < 40) {
        std::cout << "You are eligible for the treatment\n";
    }else {
        std::cout << "Sorry, you are too old for the treatment\n";
    }
}