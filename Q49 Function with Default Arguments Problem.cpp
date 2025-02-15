/* Write a function calculateArea(double radius, double pi = 3.14) that calculates the area of a circle using the formula p * r².  
If the user does not provide the value of pi, use 3.14 as the default.  
Call this function with and without specifying the value of pi.  */ 

#include <iostream>
using namespace std;

// Function definition default value for pi
double calculateArea(double radius, double pi = 3.14) {
    return pi * radius * radius; //area
}

int main() {
    double radius;
    
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // default value of pi (3.14)
    double areaDefaultPi = calculateArea(radius);
    cout << "Area with default pi (3.14): " << areaDefaultPi << endl;

    // custom value for pi
    double customPi = 3.14159;
    double areaCustomPi = calculateArea(radius, customPi);
    cout << "Area with custom pi (3.14159): " << areaCustomPi << endl;

    return 0;
}

