#include <iostream>

#include <string>

using namespace std;

class Config {

    string version;

public:

    Config() { version = "1.0.0"; }

    string getVersion() const { return version; }

};

int main() {

    Config cfg;

    cout << cfg.getVersion() << "\n";

    return 0;

}