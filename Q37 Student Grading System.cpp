/* Write a program that accepts a student's marks in 5 subjects. 
o	Use nested if-else to assign grades (A, B, C, D, F) based on the percentage. 
o	If the student fails in more than one subject, print "Repeat Year" regardless of percentage. 
*/
#include <iostream>
using namespace std;

int main() {
    double marks[5];
    double totalMarks = 0;
    int failedSubjects = 0;

    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        
        // Check if the student failed in the current subject
        if (marks[i] < 40) {  // Assuming 40 as the passing mark
            failedSubjects++;
        }
        
        totalMarks += marks[i];
    }

    // If the student fails in more than one subject, print "Repeat Year"
    if (failedSubjects > 1) {
        cout << "Repeat Year" << endl;
    } else {
        //  percentage
        double percentage = (totalMarks / 500) * 100;
        cout << "Percentage: " << percentage << "%" << endl;

        // grades based on percentage
        if (percentage >= 90) {
            cout << "Grade: A" << endl;
        } else if (percentage >= 80) {
            cout << "Grade: B" << endl;
        } else if (percentage >= 60) {
            cout << "Grade: C" << endl;
        } else if (percentage >= 40) {
            cout << "Grade: D" << endl;
        } else {
            cout << "Grade: F" << endl;
        }
    }

    return 0;
}

