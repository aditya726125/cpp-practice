#include <iostream>
    using namespace std;
    class Parent81 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child81 : public Parent81 {};
    int main() {
        Child81 c;
        c.show();
        return 0;
    }