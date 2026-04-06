#include <iostream>
    using namespace std;
    class Base71 {
    public:
        virtual void print() { cout << "Base\n"; }
    };
    class Derived71 : public Base71 {
    public:
        void print() override { cout << "Derived\n"; }
    };
    int main() {
        Base71* b = new Derived71();
        b->print();
        delete b;
        return 0;
    }