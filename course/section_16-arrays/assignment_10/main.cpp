#include <iostream>
#include <ctime>

int main() {
    std::cout << "Welcome to the greatest calculator on Earth!\n";

    std::srand(std::time(0));

    while(true) {
        int num1 = rand()%200, num2 = rand()%200, expected;
        int op = rand()%3;

        char operation;
        if(op == 0) {
            expected = num1 + num2;
            operation = '+';
        }else if(op == 1) {
            expected = num1 - num2;
            operation = '-';
        }else {
            expected = num1 * num2;
            operation = '*';
        }

        std::cout << "What's the result of " << num1 << ' ' << operation << ' ' << num2 << ": ";
        int answer;
        std::cin >> answer;

        if(answer == expected) {
            std::cout << "Congratulations! You got the result " << answer << " right!\n";
        }else {
            std::cout << "Naah! The correct result is: " << expected << '\n';
        }

        std::cout << '\n';

        std::cout << "Do you want me to try again? (Y | N) : ";
        char go_on;
        std::cin >> go_on;

        if(go_on != 'Y' && go_on != 'y') {
            std::cout << "See you later!\n";
            break;
        }
    }
}