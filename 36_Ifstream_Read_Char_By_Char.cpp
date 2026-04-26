#include <iostream>

#include <fstream>

using namespace std;

int main() {

    ifstream file("data.txt");

    char ch;

    if (file.is_open()) {

        while (file.get(ch)) {

            cout << ch;

        }

        file.close();

    }

    return 0;

}