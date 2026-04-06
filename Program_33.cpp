#include <iostream>
    using namespace std;
    class Parent33 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child33 : public Parent33 {};
    int main() {
        Child33 c;
        c.show();
        return 0;
    }