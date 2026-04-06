#include <iostream>
    using namespace std;
    class Sample72 {
        int val;
    public:
        Sample72(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample72 obj(720);
        obj.display();
        return 0;
    }