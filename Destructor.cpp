//vector is a collection heteregenous elements
#include <iostream>
using namespace std;
class emp{
    public:
    virtual void sal(){
        cout<<"Employee Salary";
    }
virtual ~emp(){};
};
class Manager:public emp{
    public:
    void sal(){
        cout<<"Manager Salary";
    }
};
int main(){
    emp *ptr = new Manager();
    ptr->sal();
    return 0;
}