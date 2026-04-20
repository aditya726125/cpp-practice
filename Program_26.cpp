#include <iostream>

using namespace std;

void process(int code) {

    try {

        if (code == 1) throw 10;

        if (code == 2) throw "Error string";

    } catch (int e) {

        cout << "Integer Exception: " << e << "\n";

    } catch (...) {

        cout << "Default Exception caught\n";

    }

}

int main() {

    process(1);

    process(2);

    return 0;

}