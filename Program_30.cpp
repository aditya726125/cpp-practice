#include <iostream>
    using namespace std;
    class Sample30 {
        int val;
    public:
        Sample30(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample30 obj(300);
        obj.display();
        return 0;
    }