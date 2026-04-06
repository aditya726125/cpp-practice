#include <iostream>
    using namespace std;
    class Vehicle {
    public:
        void honk() { cout << "Beep beep!\n"; }
    };
    class Car : public Vehicle {
    public:
        string model = "Sedan";
    };
    int main() {
        Car myCar;
        myCar.honk();
        cout << "Model: " << myCar.model << "\n";
        return 0;
    }