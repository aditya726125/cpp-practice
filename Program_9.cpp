#include <iostream>
    using namespace std;
    class Parent9 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child9 : public Parent9 {};
    int main() {
        Child9 c;
        c.show();
        return 0;
    }