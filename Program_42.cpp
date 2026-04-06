#include <iostream>
    using namespace std;
    class Sample42 {
        int val;
    public:
        Sample42(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample42 obj(420);
        obj.display();
        return 0;
    }