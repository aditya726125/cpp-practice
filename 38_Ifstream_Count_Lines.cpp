#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

    ifstream file("data.txt");

    string line;

    int count = 0;

    if (file.is_open()) {

        while (getline(file, line)) count++;

        cout << count << "\n";

        file.close();

    }

    return 0;

}