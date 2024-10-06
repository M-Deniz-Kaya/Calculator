#include <iostream>
#include <limits>

int main() {
    float a, b; // We use float to hold both int and float values
    char transaction;

    while (true) {
        std::cout << "First number (enter 'q' to exit): ";
        if (!(std::cin >> a)) {
            std::cin.clear(); // Resetting error status
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clearing the input buffer
            std::cout << "exiting" << std::endl;
            break;
        }

        std::cout << "second number: ";
        std::cin >> b;

        std::cout << "Enter transaction (+, -, *, /): ";
        std::cin >> transaction;

        switch (transaction) {
        case '+':
            std::cout << "response : " << a + b << std::endl;
            break;

        case '-':
            std::cout << "response : " << a - b << std::endl;
            break;

        case '*':
            std::cout << "response : " << a * b << std::endl;
            break;

        case '/':
            if (b != 0) {
                std::cout << "response : " << a / b << std::endl;
            }
            else {
                std::cout << "error: division by zero!" << std::endl;
            }
            break;

        default:
            std::cout << "unknown transaction." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}