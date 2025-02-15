/* Assignment 8: Multi-Level Discount System 
Develop a program that calculates the total price after applying a discount based on purchase value:  
Purchases below Rs 100: no discount  
Rs100-Rs 500: 10% discount  
Rs 500-Rs 1000: 15% discount  
Above Rs 1000: 20% discount  
Use nested conditional operators for the discount logic. 
*/


#include <iostream>
using namespace std;

int main() {
    float purchaseAmount, discountedPrice;

    // Input the purchase amount
    cout << "Enter the total purchase amount (in Rs): ";
    cin >> purchaseAmount;

    // Calculate the discount using nested conditional operators
    discountedPrice = (purchaseAmount < 100) ? purchaseAmount :
                      (purchaseAmount >= 100 && purchaseAmount <= 500) ? purchaseAmount * 0.90 :
                      (purchaseAmount > 500 && purchaseAmount <= 1000) ? purchaseAmount * 0.85 :
                      purchaseAmount * 0.80;

    // Output the discounted price
    cout << "The price after discount is: Rs " << discountedPrice << endl;

    return 0;
}

