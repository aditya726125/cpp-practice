#include <iostream>
    using namespace std;
    class Base17 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived17 : public Base17 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base17* b = new Derived17();
        b->print();
        delete b;
        return 0;
    }