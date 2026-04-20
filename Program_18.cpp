#include <iostream>

using namespace std;

class Shape {

public:

    virtual void draw() = 0;

};

class Circle : public Shape {

public:

    void draw() override { cout << "Drawing Circle\n"; }

};

class Square : public Shape {

public:

    void draw() override { cout << "Drawing Square\n"; }

};

int main() {

    Circle c;

    Square s;

    Shape* shapes[] = {&c, &s};

    shapes[0]->draw();

    shapes[1]->draw();

    return 0;

}