#include <iostream>
    using namespace std;
    class Base35 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived35 : public Base35 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base35* b = new Derived35();
        b->print();
        delete b;
        return 0;
    }