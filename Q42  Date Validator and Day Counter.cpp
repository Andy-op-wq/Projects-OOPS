/*Assignment 7: Date Validator and Day Counter 
Write a program to validate a date entered in DD-MM-YYYY format.  
Use if-else to check for validity of the day, month, and year, including leap years.  
Add logic to calculate the day of the week for the given date using a switch-case statement. 
 */
 #include <iostream>
using namespace std;

// Function to check if the year is a leap year
bool isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to validate the date
bool validateDate(int day, int month, int year) {
    if (year < 1) {
        cout << "Error: Invalid year!" << endl;
        return false;
    }

    if (month < 1 || month > 12) {
        cout << "Error: Invalid month!" << endl;
        return false;
    }

    // Days in each month
    int daysInMonth[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (day < 1 || day > daysInMonth[month - 1]) {
        cout << "Error: Invalid day!" << endl;
        return false;
    }
    return true;
}

// Function to calculate the day of the week
string getDayOfWeek(int day, int month, int year) {
    // Zeller's Congruence algorithm to calculate the day of the week
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int dayOfWeek = (day + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;
    
    switch (dayOfWeek) {
        case 0: return "Saturday";
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        default: return "Invalid day";
    }
}

int main() {
    int day, month, year;

    // Taking input for the date
    cout << "Enter a date (DD-MM-YYYY): ";
    scanf("%d-%d-%d", &day, &month, &year);

    // Validate the date
    if (validateDate(day, month, year)) {
        // If valid, calculate and display the day of the week
        string dayOfWeek = getDayOfWeek(day, month, year);
        cout << "The day of the week is: " << dayOfWeek << endl;
    }

    return 0;
}

