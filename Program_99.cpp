#include <iostream>

using namespace std;

class Printer {

public:

    void print() { cout << "Printing\n"; }

};

class Scanner {

public:

    void scan() { cout << "Scanning\n"; }

};

class Copier : public Printer, public Scanner {};

int main() {

    Copier c;

    c.print();

    c.scan();

    return 0;

}