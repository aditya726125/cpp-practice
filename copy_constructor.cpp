//Program to calculate total marks using copy constructor
#include <iostream>
using namespace std;
class Student{
    int marks[5];
    public:
    Student(int m[5]){
        int t = 0;
        for(int i=0; i<5; i++){
            marks[i] = m[i];
            t += marks[i];
        }
        cout << "Total marks: " << t << endl;
    }
    Student(Student &s){
        int t = 0;
        for(int i=0; i<5; i++){
            marks[i] = s.marks[i];
            t += marks[i];
        }
        cout << "Total marks using copy constructor: " << t << endl;
    }
};
int main(){
    int m[5];
    cout << "Enter marks of 5 subjects: ";
    for(int i=0; i<5; i++){
        cin >> m[i];
    }
    Student s1(m);
    Student s2(s1);
    return 0;
}