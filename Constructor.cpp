//WAP to calculate total marks(using array) of student using paramet constructor
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
};
int main(){
    int a[5];
    cout << "Enter marks of 5 subjects: ";
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    Student s(a);
return 0;
}