#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the values of x and y: ";
    cin >> a >> b;

    cout << "The sum is " << a + b << endl;
    cout << "The difference is " << a - b << endl;
    cout << "The multiplication is " << a * b << endl;
    cout << "The division is " << a / b << endl;
    cout << "The modulus is " << a % b << endl;

    return 0;
}