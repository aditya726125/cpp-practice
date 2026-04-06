#include <iostream>
    using namespace std;
    class Base53 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived53 : public Base53 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base53* b = new Derived53();
        b->print();
        delete b;
        return 0;
    }