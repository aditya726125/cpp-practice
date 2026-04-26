#include <iostream>

#include <fstream>

#include <string>

using namespace std;

int main() {

    ifstream src("source.txt");

    ofstream dest("dest.txt");

    string line;

    if (src && dest) {

        while (getline(src, line)) {

            dest << line << "\n";

        }

        src.close();

        dest.close();

    }

    return 0;

}