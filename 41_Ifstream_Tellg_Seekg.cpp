#include <iostream>

#include <fstream>

using namespace std;

int main() {

    ifstream file("data.txt");

    if (file.is_open()) {

        file.seekg(5, ios::beg);

        cout << file.tellg() << "\n";

        char ch;

        file.get(ch);

        cout << ch << "\n";

        file.close();

    }

    return 0;

}