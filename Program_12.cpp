#include <iostream>
    using namespace std;
    class Sample12 {
        int val;
    public:
        Sample12(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample12 obj(120);
        obj.display();
        return 0;
    }