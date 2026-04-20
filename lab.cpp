//Write a program to print number in reverse order

#include <iostream>
using namespace std;
int main(){
int n , rev=0;
cout << "Enter an integer: " ;
cin>>n;

while(n){
    int rem = n%10;
    rev = rev*10 + rem ;
    n/=10 ;
}
cout << "Reversed number:" << rev ;
return 0;
}