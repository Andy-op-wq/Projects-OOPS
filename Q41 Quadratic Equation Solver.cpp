/* Write a program to solve a quadratic equation (ax^2 + bx + c = 0).
 o Use nested if-else to classify the roots as real and distinct, real and equal, or imaginary. 
 o 	Use conditional operators to check if the coefficients are valid (non-zero a). 
 */
#include <iostream>
#include <cmath>  // For sqrt function
using namespace std;

int main() {
    double a, b, c;

    // Input coefficients a, b, and c
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Use if-else to check if 'a' is non-zero
    if (a == 0) {
        cout << "Error: Coefficient 'a' cannot be zero!" << endl;
    } else {
        // Calculate the discriminant (b^2 - 4ac)
        double discriminant = b * b - 4 * a * c;

        // Use nested if-else to classify the roots
        if (discriminant > 0) {
            // Real and distinct roots
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "The roots are real and distinct: " << root1 << " and " << root2 << endl;
        }
        else if (discriminant == 0) {
            // Real and equal roots
            double root = -b / (2 * a);
            cout << "The roots are real and equal: " << root << endl;
        }
        else {
            // Imaginary roots
            cout << "The roots are imaginary." << endl;
        }
    }

    return 0;
}

