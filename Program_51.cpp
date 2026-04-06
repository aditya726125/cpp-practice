#include <iostream>
    using namespace std;
    class Parent51 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child51 : public Parent51 {};
    int main() {
        Child51 c;
        c.show();
        return 0;
    }