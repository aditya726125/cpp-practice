#include <iostream>

using namespace std;

class Box {

    int length;

public:

    Box(int l) { length = l; }

    Box(const Box &b) { length = b.length; }

    int getLength() { return length; }

};

int main() {

    Box b1(5);

    Box b2 = b1;

    cout << b2.getLength() << "\n";

    return 0;

}