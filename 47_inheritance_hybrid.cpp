#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() { cout << "Vehicle\n"; }
};
class Car : virtual public Vehicle {};
class Boat : virtual public Vehicle {};
class AmphibiousCar : public Car, public Boat {};
int main() {
    AmphibiousCar ac;
    return 0;
}