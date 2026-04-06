#include <iostream>
    using namespace std;
    class Sample78 {
        int val;
    public:
        Sample78(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample78 obj(780);
        obj.display();
        return 0;
    }