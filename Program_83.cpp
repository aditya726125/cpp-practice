#include <iostream>

using namespace std;

class Data {

public:

    Data() { cout << "Empty\n"; }

    Data(int n) { cout << "Int: " << n << "\n"; }

    Data(double d) { cout << "Double: " << d << "\n"; }

};

int main() {

    Data d1;

    Data d2(5);

    Data d3(5.5);

    return 0;

}