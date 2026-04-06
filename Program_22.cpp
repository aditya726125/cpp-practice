#include <iostream>
    using namespace std;
    class SimpleStack22 {
        int arr[5], top = -1;
    public:
        void push(int x) { if (top < 4) arr[++top] = x; }
        void pop() { if (top >= 0) top--; }
    };
    int main() {
        SimpleStack22 s;
        s.push(22);
        s.pop();
        return 0;
    }