#include <iostream>
    using namespace std;
    class Sample66 {
        int val;
    public:
        Sample66(int v) : val(v) {}
        void display() { cout << "Value: " << val << "\n"; }
    };
    int main() {
        Sample66 obj(660);
        obj.display();
        return 0;
    }