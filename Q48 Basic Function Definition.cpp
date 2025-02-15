/* Write a C++ program that defines a function sum (int a, int b)
 that takes two integers as arguments and returns their sum. Call this function from main()
  and display the result */

#include <iostream>
using namespace std;

// Function def
int sum(int a, int b) {
    return a + b; // Return sum of a and b
}

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the sum function and store the result
    int result = sum(num1, num2);

    // Display ANS
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

