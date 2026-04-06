#include <iostream>
    using namespace std;
    class Parent69 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child69 : public Parent69 {};
    int main() {
        Child69 c;
        c.show();
        return 0;
    }