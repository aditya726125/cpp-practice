#include <iostream>
    using namespace std;
    class Parent27 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child27 : public Parent27 {};
    int main() {
        Child27 c;
        c.show();
        return 0;
    }