#include <iostream>

using namespace std;

class Account {

    int balance;

public:

    Account() { balance = 0; }

    void deposit(int amount) {

        if (amount > 0) balance += amount;

    }

    int getBalance() { return balance; }

};

int main() {

    Account acc;

    acc.deposit(100);

    acc.deposit(-50);

    cout << acc.getBalance() << "\n";

    return 0;

}