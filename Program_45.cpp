#include <iostream>
    using namespace std;
    class Parent45 {
    public:
        void show() { cout << "Parent class\n"; }
    };
    class Child45 : public Parent45 {};
    int main() {
        Child45 c;
        c.show();
        return 0;
    }