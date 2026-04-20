#include <iostream>

using namespace std;

class A {

public:

    void funcA() { cout << "A\n"; }

};

class B : public A {

public:

    void funcB() { cout << "B\n"; }

};

class C : public B {

public:

    void funcC() { cout << "C\n"; }

};

int main() {

    C obj;

    obj.funcA();

    obj.funcB();

    obj.funcC();

    return 0;

}