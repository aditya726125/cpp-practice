#include <iostream>

#include <string>

using namespace std;

template <class T>

class Box {

    T content;

public:

    Box(T val) { content = val; }

    T getContent() { return content; }

};

int main() {

    Box<int> intBox(100);

    Box<string> strBox("Hello");

    cout << intBox.getContent() << "\n";

    cout << strBox.getContent() << "\n";

    return 0;

}