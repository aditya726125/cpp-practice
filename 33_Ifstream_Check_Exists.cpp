#include <iostream>

#include <fstream>

using namespace std;

int main() {

    ifstream file("missing.txt");

    if (!file) {

        cout << "File does not exist or cannot be opened.\n";

    } else {

        cout << "File opened successfully.\n";

        file.close();

    }

    return 0;

}