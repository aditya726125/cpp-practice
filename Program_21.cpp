#include <iostream>
    using namespace std;
    class Parent21 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child21 : public Parent21 {};
    int main() {
        Child21 c;
        c.show();
        return 0;
    }