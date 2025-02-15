/* Write a program that accepts two complex numbers (real and imaginary parts) and compares them.
Use if-else to determine which complex number has a higher magnitude. 
Print "Equal" if they have the same magnitude
 */
#include <iostream>
#include <cmath> // For sqrt() function

using namespace std;

int main() {
    // Declare variables for the real and imaginary parts of two complex numbers
    double real1, imag1, real2, imag2;

    // Input the first complex number
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;

    // Input the second complex number
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    // Calculate the magnitude of the first complex number
    double mag1 = sqrt(real1 * real1 + imag1 * imag1);

    // Calculate the magnitude of the second complex number
    double mag2 = sqrt(real2 * real2 + imag2 * imag2);

    // Compare the magnitudes and output the result
    if (mag1 > mag2) {
        cout << "The first complex number has a higher magnitude." << endl;
    } else if (mag1 < mag2) {
        cout << "The second complex number has a higher magnitude." << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}

