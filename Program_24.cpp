#include <iostream>
    using namespace std;
    class Sample24 {
        int val;
    public:
        Sample24(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample24 obj(240);
        obj.display();
        return 0;
    }