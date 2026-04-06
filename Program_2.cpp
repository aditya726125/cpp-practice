#include <iostream>
    using namespace std;
    class Account {
        double balance = 0;
    public:
        void deposit(double amount) {
            if (amount > 0) balance += amount;
        }
        double getBalance() { return balance; }
    };
    int main() {
        Account myAcc;
        myAcc.deposit(150.50);
        cout << "Balance: $" << myAcc.getBalance() << "\n";
        return 0;
    }