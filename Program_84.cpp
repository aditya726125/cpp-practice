#include <iostream>

using namespace std;

class Employee {

    double salary;

public:

    void setSalary(double s) { salary = s; }

    double getSalary() { return salary; }

};

int main() {

    Employee emp;

    emp.setSalary(50000);

    cout << emp.getSalary() << "\n";

    return 0;

}