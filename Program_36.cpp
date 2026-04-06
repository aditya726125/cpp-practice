#include <iostream>
    using namespace std;
    class Sample36 {
        int val;
    public:
        Sample36(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample36 obj(360);
        obj.display();
        return 0;
    }