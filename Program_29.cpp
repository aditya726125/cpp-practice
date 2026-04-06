#include <iostream>
    using namespace std;
    class Base29 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived29 : public Base29 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base29* b = new Derived29();
        b->print();
        delete b;
        return 0;
    }