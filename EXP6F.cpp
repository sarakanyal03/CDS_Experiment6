//SARA KANYAL
//EXP 6 F
//23070123115
//ENTC B2
#include <iostream>
using namespace std;

int main() {
    int i = 1; // outer loop counter

    while (i <= 10) {
        int j = 1; // inner loop counter

        while (j <= 10) {
            cout << i * j << "\t"; // print the product
            j++;
        }

        cout << endl; // new line after each row
        i++;
    }

    return 0;
}