#include <iostream>
    using namespace std;
    class Parent57 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child57 : public Parent57 {};
    int main() {
        Child57 c;
        c.show();
        return 0;
    }