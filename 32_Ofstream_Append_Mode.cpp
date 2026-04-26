#include <iostream>

#include <fstream>

using namespace std;

int main() {

    ofstream file("log.txt", ios::app);

    if (file.is_open()) {

        file << "New log entry\n";

        file.close();

    }

    return 0;

}