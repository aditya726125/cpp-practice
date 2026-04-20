#include <iostream>
using namespace std;

class Student {
    int Id, tm = 0;
    float P;
    char name[30];
    int m[5];
    char g;

public:
    void input();
    void cal();
    void print();
};

void Student::input() {
    cout << "Enter Student Id: ";
    cin >> Id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) { 
        cin >> m[i];
    }
}

void Student::cal() {
    tm = 0; 
    for (int i = 0; i < 5; i++) {
        tm += m[i]; 
    }
    P = tm / 5.0;

    if (P >= 90) g = 'O';
    else if (P >= 80) g = 'A';
    else if (P >= 70) g = 'B';
    else if (P >= 60) g = 'C';
    else g = 'F';
}

void Student::print() {
    cout << "\n--- Student Report ---" << endl;
    cout << "ID: " << Id << "\nName: " << name << endl;
    cout << "Total Marks: " << tm << "\nPercentage: " << P << "%" << endl;
    cout << "Grade: " << g << endl;
}

int main() {
    Student s; 
    s.input();
    s.cal();
    s.print();
    return 0;
}