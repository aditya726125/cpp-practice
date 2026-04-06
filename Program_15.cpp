#include <iostream>
    using namespace std;
    class Parent15 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child15 : public Parent15 {};
    int main() {
        Child15 c;
        c.show();
        return 0;
    }