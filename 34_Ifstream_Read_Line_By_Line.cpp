#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

    ifstream file("data.txt");

    string line;

    if (file.is_open()) {

        while (getline(file, line)) {

            cout << line << "\n";

        }

        file.close();

    }

    return 0;

}