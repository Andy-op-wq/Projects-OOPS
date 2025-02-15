/* Write a program that accepts a single character as input. 
o	Use a switch statement to classify it as a vowel, consonant, digit, or special character. 
o	Handle uppercase and lowercase vowels separately. 
*/
#include <iostream>
using namespace std;

int main() {
    char ch;

    //character
    cout << "Enter a character: ";
    cin >> ch;

    // Use switch statement to classify the character
    switch (ch) {
        // separately for uppercase and lowercase
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            cout << ch << " is a vowel." << endl;
            break;
        
        // digits
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            cout << ch << " is a digit." << endl;
            break;

        //  consonants (alphabetic characters other than vowels)
        default:
            // Check if character is an alphabet (either uppercase or lowercase)
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                cout << ch << " is a consonant." << endl;
            }
            // Check for special characters
            else {
                cout << ch << " is a special character." << endl;
            }
            break;
    }

    return 0;
}

