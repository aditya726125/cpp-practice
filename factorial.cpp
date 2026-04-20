#include <iostream>
using namespace std;
int main(){
    int n , b = 1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i = 1; i<=n ; i++){
        b *= i;
    }
    cout<<"Factorial of number is: "<<b;
    return 0;
}