#include<iostream>
using namespace std;

int main(){
    int n,rem;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    int rev=0;
    while(n>0){
        //cout<<"hfgygsjler";
        rem = n % 10 ;
        rev=rev * 10 + rem ;
        n = n / 10 ; 
    }
    cout<<"THE REVERSE OF THESE NUMBER IS "<<rev;
}  