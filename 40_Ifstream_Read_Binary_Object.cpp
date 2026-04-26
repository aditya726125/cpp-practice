#include <iostream>

#include <fstream>

using namespace std;

class Record {

public:

    int id;

    double value;

};

int main() {

    Record r;

    ifstream file("record.dat", ios::binary);

    if (file.is_open()) {

        file.read(reinterpret_cast<char*>(&r), sizeof(Record));

        cout << r.id << " " << r.value << "\n";

        file.close();

    }

    return 0;

}