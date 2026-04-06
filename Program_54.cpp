#include <iostream>
    using namespace std;
    class Sample54 {
        int val;
    public:
        Sample54(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample54 obj(540);
        obj.display();
        return 0;
    }