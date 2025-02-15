/* Assignment 10: Banking System with Menu 
Write a program to simulate a simple banking system with the following menu options: 
Deposit  
Withdraw  
Balance Inquiry  
Exit 
Use a switch statement to implement the menu. 
Implement input validation and ensure no withdrawal exceeds the account balance */

#include <iostream>
#include <limits>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    // Function to deposit money into the account
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited Rs " << amount << endl;
        } else {
            cout << "Invalid amount! Deposit should be greater than 0." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(float amount) {
        if (amount <= 0) {
            cout << "Invalid amount! Withdrawal should be greater than 0." << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds! Cannot withdraw Rs " << amount << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrew Rs " << amount << endl;
        }
    }

    // Function to check the balance
    void checkBalance() const {
        cout << "Your current balance is Rs " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    float amount;

    do {
        // Menu display
        cout << "\n*** Bank Menu ***\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        // Input validation for choice
        while (!(cin >> choice)) {
            cout << "Invalid input! Please enter a valid choice (1-4): ";
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
        }

        switch (choice) {
            case 1:
                // Deposit money
                cout << "Enter amount to deposit: ";
                while (!(cin >> amount)) {
                    cout << "Invalid amount! Please enter a valid amount to deposit: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                account.deposit(amount);
                break;

            case 2:
                // Withdraw money
                cout << "Enter amount to withdraw: ";
                while (!(cin >> amount)) {
                    cout << "Invalid amount! Please enter a valid amount to withdraw: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                account.withdraw(amount);
                break;

            case 3:
                // Balance Inquiry
                account.checkBalance();
                break;

            case 4:
                cout << "Exiting the banking system. Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a valid option (1-4)." << endl;
                break;
        }

    } while (choice != 4); // Continue until the user chooses to exit

    return 0;
}

