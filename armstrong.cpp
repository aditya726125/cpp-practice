#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n , digit , rem ;
    double result = 0.0 ;
    cout<<"Enter the number: " ;
    cin>>n;
    digit = (int)(log10(n))+1;
    int temp = n;
    while(temp){
    rem = temp%10;
    result += pow(rem,digit);
    temp /= 10;
    }
    if(result==n){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an armstrong number";
    }
    return 0;
}