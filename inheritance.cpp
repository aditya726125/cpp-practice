// Inheritance -- It is the mechanism by which one class acquire the properties of another class.
// It promotes class reusability , hierarchical classification , extensability and polymorphism.
// #include <iostream>
// using namespace std;
// class ABC{                               //Parent/Base class
//     public:
//
// };
// class xyz:public ABC{                   //Child/Derived class
//    public:

//};

// There are 5 types of inheritance:
// 1. Single Inheritance -- 1 base class and 1 derived class.

// 2. Multiple Inheritance -- 2 or more base classes and 1 derived class.
// 3. Multilevel Inheritance -- 1 base class and 1 derived class and 1 derived class of the derived class.
// 4. Hierarchical Inheritance -- 1 base class and multiple derived classes.
// 5. Hybrid Inheritance -- Combination of two or more types of inheritance,single parent class and multiple child class.
#include <iostream>
using namespace std;
class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double bal)
    {
        balance = bal;
    }
    void deposit(double amt)
    {
        balance += amt;
    }
    void withdraw(double amt)
    {
        balance -= amt;
    }
    void checkBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};
class savingAccount : public BankAccount
{
public:
    savingAccount(double bal) : BankAccount(bal)
    {
    }
    void interest()
    {
        balance += balance * 0.05;
    }
};
int main()
{
    savingAccount sa(1000);
    sa.checkBalance();
    sa.deposit(500);
    sa.checkBalance();
    sa.interest();
    sa.checkBalance();
    return 0;
}

//Diamond Problem occur in multiple inheritance when a class inherit from two class that both inherit from same base class.
//This creates ambiguity because the derived class receive two copies of the base class.
//The inheritance structure form a diamond shape that's why it is called diamond problem.