#include <iostream>

#include <string>

using namespace std;

class Player {

    string name;

    int health;

public:

    Player() : Player("Unknown", 100) {}

    Player(string n) : Player(n, 100) {}

    Player(string n, int h) { name = n; health = h; }

    void info() { cout << name << " - " << health << "HP\n"; }

};

int main() {

    Player p1;

    Player p2("Hero");

    p1.info();

    p2.info();

    return 0;

}