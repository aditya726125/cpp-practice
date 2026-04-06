#include <iostream>
    using namespace std;
    class Sample60 {
        int val;
    public:
        Sample60(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample60 obj(600);
        obj.display();
        return 0;
    }