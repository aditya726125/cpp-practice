#include <iostream>
using namespace std;
int main(){
    int n,rev;
    cout<<"Enter the number: " ;
    cin>>n;
    int temp = n;
    while(temp){
    int rem = temp%10;
    rev = rev*10 + rem ;
    temp/=10 ;
}
if(temp==n){
    cout<<"Pallidrome" ;
}
else
    cout<<"Not Pallidrome" ;
    return 0;
}