#include <iostream>

#include <fstream>

using namespace std;

class Record {

public:

    int id;

    double value;

};

int main() {

    Record r = {1, 99.5};

    ofstream file("record.dat", ios::binary);

    if (file.is_open()) {

        file.write(reinterpret_cast<char*>(&r), sizeof(Record));

        file.close();

    }

    return 0;

}