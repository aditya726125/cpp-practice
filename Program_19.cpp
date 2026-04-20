#include <iostream>

using namespace std;

class Distance {

    int meters;

public:

    Distance(int m) { meters = m; }

    friend void displayDistance(Distance d);

};

void displayDistance(Distance d) {

    cout << "Distance: " << d.meters << "m\n";

}

int main() {

    Distance dist(100);

    displayDistance(dist);

    return 0;

}