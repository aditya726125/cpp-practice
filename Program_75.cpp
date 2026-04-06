#include <iostream>
    using namespace std;
    class Parent75 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child75 : public Parent75 {};
    int main() {
        Child75 c;
        c.show();
        return 0;
    }