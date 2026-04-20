#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string acctt;
    long accNo;
    double bal;

    bool isValidAmt(double amt) {
        return amt > 0;
    }

public:
    BankAccount(string n, long a, double iBal) {
        acctt = n;
        accNo = a;
        bal = (iBal >= 0) ? iBal : 0;
    }

    void deposit(double amt) {
        if (isValidAmt(amt)) {
            bal += amt;
            cout << "Successfully deposited: $" << amt << endl;
        } else {
            cout << "Error: Invalid deposit amount." << endl;
        }
    }

    void withdrawal(double amt) {
        if (isValidAmt(amt) && amt <= bal) {
            bal -= amt;
            cout << "Successfully withdrew: $" << amt << endl;
        } else if (amt > bal) {
            cout << "Error: Insufficient balance!" << endl;
        } else {
            cout << "Error: Invalid withdrawal amount." << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << acctt << endl;
        cout << "Account Number: " << accNo << endl;
        cout << "Current Balance: $" << bal << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    string name;
    long accountNum;
    double initialDeposit;
    int choice;
    double amount;

    // Initial User Input
    cout << "Welcome to the Bank System" << endl;
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> accountNum;
    cout << "Enter Initial Deposit: ";
    cin >> initialDeposit;

    // Create the account object
    BankAccount myAccount(name, accountNum, initialDeposit);

    // Interaction Menu
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myAccount.withdrawal(amount);
                break;
            case 3:
                myAccount.display();
                break;
            case 4:
                cout << "Thank you for using our bank!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}