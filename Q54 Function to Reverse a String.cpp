/* Program 7: Function to Reverse a String  
Problem: Implement a function reverseString(string &str) that reverses a 
string in-place using pass by reference. Example:  
Input: "hello"  
Output: "olleh" */
#include <iostream>
#include <string>
using namespace std;

// Function to reverse the string in place
void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        // Swap characters at position 'i' and 'n - i - 1'
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    string str;
    
    // user for input
    cout << "Enter a string: ";
    cin >> str;
    
    // Call the function to reverse the string
    reverseString(str);
    
    // Display the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}

