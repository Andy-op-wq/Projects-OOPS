/*Assignment 9: Palindrome Number Checker  
Write a program to check if a number is a palindrome.  
Use a while loop to reverse the digits of the number.  
Extend the program to print all palindrome numbers within a given range */

#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;
    int remainder;

    // Reverse the digits of the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the reversed number is equal to the original number
    return (originalNumber == reversedNumber);
}

// Function to print palindrome numbers within a given range
void printPalindromesInRange(int start, int end) {
    cout << "Palindrome numbers between " << start << " and " << end << " are:" << endl;
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number, start, end;

    // Check if a single number is a palindrome
    cout << "Enter a number to check if it's a palindrome: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    // Check for palindrome numbers within a given range
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    printPalindromesInRange(start, end);

    return 0;
}

