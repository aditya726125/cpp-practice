#include <iostream>
    using namespace std;
    class Base47 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived47 : public Base47 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base47* b = new Derived47();
        b->print();
        delete b;
        return 0;
    }