# Experiment6

AIM : To study and implement C++ decision making statements loops <br>
<br>
THEORY : <BR>
Loops in C++ are used to execute a group of instructions or a block of code multiple times, without writing it repeatedly. Some loops in C++ are as follows: <br>
1) `for` loop : It is commonly used when you know how many times you want to execute a statement or a block of statements. <br>
syntax: <br>
```
for (initialization; condition; increment/decrement) {
    // code to be executed
}
```
2) `while` loop : It is used when the number of iterations is not known.
syntax:
  ```
 while (condition) {
    // code to be executed
}
```
3) `do-while` loop: The do-while loop is similar to the while loop, with guaranteeing that the loop body will be executed at least once. <br>
syntax:
```
do {
    // code to be executed
} while (condition);
```
<BR>
CODE : <BR>
1) <br>
```
#include <iostream>
using namespace std;

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        cout << "HELLO WORLD(" << i + 1 << ")" << "\n";
    }
    return 0;
}```


2) <br>
```
#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=(n-1);j++)
        {
            cout<<" ";
        }
        while(k!=(2*i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        }
        cout<<"end1";
    
}
```
3) <br>
```
#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter a number: "<<"\n";
    cin>>i;
    while(i<=10)
    {
        cout<<" "<<"\n"<<i++;
    
    } 
    return 0;
}
```
4) <br>
```
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
```
5) <br>
```
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
```
6) <br>
```
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
```
7) <br>
```
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
```
OUTPUT : <BR>
6A : <BR>
![exp6A](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6A.png) <br>
6B : <BR>
![exp6B](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6B.png) <br>
6C : <BR>
![exp6C](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6C.png) <br>
6D : <BR>
![exp6D](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6D.png) <br>
6E : <BR>
![exp6E](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6E.png) <br>
6F : <BR>
![exp6F](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6F.png) <br>
6G : <BR>
![exp6G](https://github.com/sarakanyal03/CDS_Experiment6/blob/main/6G.png) <br>
<BR>
CONCLUSION: <BR>
We gained knowledge about looping and their application and syntax in c++ to write codes.





