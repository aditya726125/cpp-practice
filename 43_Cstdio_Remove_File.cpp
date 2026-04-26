#include <iostream>

#include <cstdio>

using namespace std;

int main() {

    if (remove("data.txt") != 0) {

        cout << "Error deleting file\n";

    } else {

        cout << "File successfully deleted\n";

    }

    return 0;

}