/* Problem: Create two functions  
1. SquareValue(int num) ? Returns the square of num (pass by value).  
2. SquareReference(int &num) ? Modifies num to its square (pass by reference). 
Call both functions from main() and observe the differences */

#include <iostream>
using namespace std;

// Function to return the square of num (pass by value)
int squareValue(int num) {
    return num * num;  // returns the square of num
}

// Function to modify num to its square (pass by reference)
void squareReference(int &num) {
    num = num * num;  //num to its square
}

int main() {
    int num1 = 8;
    int num2 = 7;

    // Call squareValue (pass by value)
    cout << "Before squareValue: num1 = " << num1 << endl;
    int result = squareValue(num1);  // Not modify num1
    cout << "After squareValue: num1 = " << num1 << ", result = " << result << endl;

    // Call squareReference (pass by reference)
    cout << "Before squareReference: num2 = " << num2 << endl;
    squareReference(num2);  // This modifies num2 directly
    cout << "After squareReference: num2 = " << num2 << endl;

    return 0;
}



