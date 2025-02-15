/*Assignment 3: Calculator with Conditional Operator 
Create a calculator program that takes two operands and an operator (+, -, *, /, %).  
Use the conditional operator to implement the operations.  
Display an error message if the operator is invalid or if a division by zero is attempted. 
*/


#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // Taking input from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Using the conditional operator to perform operations
    (op == '+') ? cout << "Result: " << num1 + num2 << endl :
    (op == '-') ? cout << "Result: " << num1 - num2 << endl :
    (op == '*') ? cout << "Result: " << num1 * num2 << endl :
    (op == '/') ? (num2 != 0 ? cout << "Result: " << num1 / num2 << endl : cout << "Error: Division by zero!" << endl) :
    (op == '%') ? (num2 != 0 ? cout << "Result: " << (int)num1 % (int)num2 << endl : cout << "Error: Division by zero!" << endl) :
    cout << "Error: Invalid operator!" << endl;

    return 0;
}

