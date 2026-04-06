#include <iostream>
    using namespace std;
    class SimpleStack70 {
        int arr[5], top = -1;
    public:
        void push(int x) { if (top < 4) arr[++top] = x; }
        void pop() { if (top >= 0) top--; }
    };
    int main() {
        SimpleStack70 s;
        s.push(70);
        s.pop();
        return 0;
    }