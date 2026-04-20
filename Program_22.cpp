#include <iostream>

using namespace std;

class MathUtils {

public:

    static int square(int n) { return n * n; }

};

int main() {

    cout << "Square of 5 is: " << MathUtils::square(5) << "\n";

    return 0;

}