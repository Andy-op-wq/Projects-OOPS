/* Problem: Define a function int add(int a, int b). 
Create a function pointer that can store the address of this function and call it using the pointer */

#include <iostream>
using namespace std;

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer that matches the signature of the 'add' function
    int (*funcPtr)(int, int);

    // Store the address of the 'add' function in the function pointer
    funcPtr = add;

    // Call the function using the function pointer
    int result = funcPtr(5, 3);  // Passing 5 and 3 to the 'add' function via the pointer

    // Display the result
    cout << "The result of adding 5 and 3 is: " << result << endl;

    return 0;
}

