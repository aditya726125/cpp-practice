#include <iostream>
    using namespace std;
    class Base65 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived65 : public Base65 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base65* b = new Derived65();
        b->print();
        delete b;
        return 0;
    }