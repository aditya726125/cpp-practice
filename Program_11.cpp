#include <iostream>
    using namespace std;
    class Base11 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived11 : public Base11 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base11* b = new Derived11();
        b->print();
        delete b;
        return 0;
    }