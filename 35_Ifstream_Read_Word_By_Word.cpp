#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

    ifstream file("data.txt");

    string word;

    if (file.is_open()) {

        while (file >> word) {

            cout << word << "\n";

        }

        file.close();

    }

    return 0;

}