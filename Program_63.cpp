#include <iostream>
    using namespace std;
    class Parent63 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child63 : public Parent63 {};
    int main() {
        Child63 c;
        c.show();
        return 0;
    }