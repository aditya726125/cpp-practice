#include <iostream>
    using namespace std;
    class SimpleStack16 {
        int arr[5], top = -1;
    public:
        void push(int x) { if (top < 4) arr[++top] = x; }
        void pop() { if (top >= 0) top--; }
    };
    int main() {
        SimpleStack16 s;
        s.push(16);
        s.pop();
        return 0;
    }