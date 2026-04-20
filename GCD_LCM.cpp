#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    
    int GCD , LCM ; 
    for(int i = 1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
        GCD = i;
        }
    }
    LCM = (a*b)/GCD ;
    cout<<"LCM is: "<<LCM<<endl;
    cout<<"GCD is: "<<GCD<<endl;
    return 0 ;
}