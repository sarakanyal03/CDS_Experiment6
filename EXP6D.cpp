//SARA KANYAL
//EXP 6 D
//23070123115
//ENTC B2

#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a number (negative number to quit): ";
        std::cin >> number;

        if (number >= 0) {
            std::cout << "You entered: " << number << std::endl;
        }
    } while (number >= 0);

    std::cout << "Negative number entered. Exiting program." << std::endl;

    return 0;
}