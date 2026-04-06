#include <iostream>
    using namespace std;
    class SimpleStack46 {
        int arr[5], top = -1;
    public:
        void push(int x) { if (top < 4) arr[++top] = x; }
        void pop() { if (top >= 0) top--; }
    };
    int main() {
        SimpleStack46 s;
        s.push(46);
        s.pop();
        return 0;
    }