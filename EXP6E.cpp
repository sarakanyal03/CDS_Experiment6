//SARA KANYAL
//EXP 6 E
//23070123115
//ENTC B2
#include <iostream>
using namespace std;

int main() {
    int rows = 10;
    int columns = 10;

    // Nested for loop to generate the multiplication table
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            cout << i * j << "\t";  // Print the product and a tab space
        }
        cout << endl;  // Newline after each row
    }

    return 0;
}