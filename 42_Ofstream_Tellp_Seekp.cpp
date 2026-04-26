#include <iostream>

#include <fstream>

using namespace std;

int main() {

    ofstream file("data.txt", ios::out | ios::trunc);

    if (file.is_open()) {

        file << "0123456789";

        file.seekp(5, ios::beg);

        file << "X";

        cout << file.tellp() << "\n";

        file.close();

    }

    return 0;

}