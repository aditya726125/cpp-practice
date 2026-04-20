// Write a program to count digits of number , check number is palliodrome or not , armstrong or not 

#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number: " ;
cin>>n ;
int digit = 0;
for(int i = n; n>0; n=n/10){
    digit++;
}
cout<<"Number of digits:"<< digit;
return 0 ;
}