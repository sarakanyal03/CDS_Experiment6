//SARA KANYAL
//EXP 6 G
//23070123115
//ENTC B2

#include <iostream>

int main() {
    int rows = 5;
    int i = 1;
    int j;

    do {
        j = 1;  // Reset j for the inner loop
        do {
            std::cout << j << " ";  // Print the number
            j++;
        } while (j <= i);  // Inner loop condition
        std::cout << std::endl;
        i++;
    } while (i <= rows);  // Outer loop condition

    return 0;
}