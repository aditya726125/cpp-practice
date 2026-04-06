#include <iostream>
    using namespace std;
    class Stack {
        int arr[10], top = -1;
    public:
        void push(int x) {
            if (top < 9) arr[++top] = x;
        }
        void pop() {
            if (top >= 0) top--;
        }
        void display() {
            for (int i = top; i >= 0; i--) cout << arr[i] << " ";
            cout << "\n";
        }
    };
    int main() {
        Stack s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.pop();
        s.display();
        return 0;
    }