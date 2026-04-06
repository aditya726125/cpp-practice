#include <iostream>
    using namespace std;
    class Point {
        int x, y;
    public:
        Point() { x = 0; y = 0; }
        Point(int a, int b) { x = a; y = b; }
        void show() { cout << "(" << x << ", " << y << ")\n"; }
    };
    int main() {
        Point p1;
        Point p2(5, 3);
        p1.show();
        p2.show();
        return 0;
    }