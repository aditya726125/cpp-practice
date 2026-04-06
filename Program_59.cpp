#include <iostream>
    using namespace std;
    class Base59 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived59 : public Base59 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base59* b = new Derived59();
        b->print();
        delete b;
        return 0;
    }