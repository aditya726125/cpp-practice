#include <iostream>

#include <fstream>

using namespace std;

int main() {

    ofstream file("output.txt");

    if (file.is_open()) {

        file << "Hello, File Handling!\n";

        file.close();

    }

    return 0;

}