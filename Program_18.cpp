#include <iostream>
    using namespace std;
    class Sample18 {
        int val;
    public:
        Sample18(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample18 obj(180);
        obj.display();
        return 0;
    }