#include <iostream>

using namespace std;

class Secret {

    int passcode;

public:

    Secret() { passcode = 1234; }

    friend class Hacker;

};

class Hacker {

public:

    void reveal(Secret s) { cout << "Passcode is: " << s.passcode << "\n"; }

};

int main() {

    Secret sec;

    Hacker hack;

    hack.reveal(sec);

    return 0;

}