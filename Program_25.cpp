#include <iostream>

using namespace std;

int main() {

    int a = 10, b = 0;

    try {

        if (b == 0) throw "Division by zero!";

        cout << a / b << "\n";

    } catch (const char* msg) {

        cout << "Error: " << msg << "\n";

    }

    return 0;

}