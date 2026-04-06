#include <iostream>
    using namespace std;
    class Base77 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived77 : public Base77 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base77* b = new Derived77();
        b->print();
        delete b;
        return 0;
    }