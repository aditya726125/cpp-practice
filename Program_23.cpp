#include <iostream>
    using namespace std;
    class Base23 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived23 : public Base23 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base23* b = new Derived23();
        b->print();
        delete b;
        return 0;
    }