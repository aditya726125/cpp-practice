#include <iostream>
    using namespace std;
    class Base41 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived41 : public Base41 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base41* b = new Derived41();
        b->print();
        delete b;
        return 0;
    }