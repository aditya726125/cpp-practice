#include <iostream>
    using namespace std;
    class Sample48 {
        int val;
    public:
        Sample48(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample48 obj(480);
        obj.display();
        return 0;
    }