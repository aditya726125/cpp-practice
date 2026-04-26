#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    if (file.is_open()) {

        file << "Fstream test\n";

        file.seekg(0, ios::beg);

        string line;

        getline(file, line);

        cout << line << "\n";

        file.close();

    }

    return 0;

}