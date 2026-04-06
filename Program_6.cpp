#include <iostream>
    using namespace std;
    class Animal {
    public:
        virtual void sound() { cout << "Some animal sound\n"; }
    };
    class Cat : public Animal {
    public:
        void sound() override { cout << "Meow\n"; }
    };
    class Dog : public Animal {
    public:
        void sound() override { cout << "Woof\n"; }
    };
    int main() {
        Animal* a1 = new Cat();
        Animal* a2 = new Dog();
        a1->sound();
        a2->sound();
        delete a1;
        delete a2;
        return 0;
    }