#include <iostream>
    using namespace std;
    class Parent39 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child39 : public Parent39 {};
    int main() {
        Child39 c;
        c.show();
        return 0;
    }