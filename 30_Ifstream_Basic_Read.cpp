#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

    ifstream file("output.txt");

    string content;

    if (file.is_open()) {

        file >> content;

        cout << content << "\n";

        file.close();

    }

    return 0;

}