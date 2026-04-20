//Runtime Polymorphism(Dynamic polymorphism)
//Virtual Function is same as standard member function,this function declare and define in base class with virtual keyword and redefine or override in derived classwith same prototype.
//The pure virtual function declare in  base class assigning with 0 to the functions.
//Friend Function -- friend void display()
#include <iostream>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"Base class Deployed\n";
    }
};
class Derived:public Base{
    public:
    void display()
{
    cout<<"Derived class display";
}};
int main(){
    Base *bptr;
    Derived d;
    bptr = &d;
    //d.display();    -- Early binding
    bptr->display();  //Late binding
    return 0;
}