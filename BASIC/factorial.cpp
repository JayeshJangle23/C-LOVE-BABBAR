#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1 ;
    for(int i=1;i<=n;i++){
        fact = fact * i ;
    }
    return fact;
}
int main(){
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int fact = factorial(n);
    cout<<"THE AREA OF CIRCLE IS : "<<fact;
}