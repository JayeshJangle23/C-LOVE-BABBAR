#include<iostream>
#include<cmath>
using namespace std;
int decimalIntoBinary(int n){
    int rev=0;
    int i=0;
    while(n>0){
        int bit = n%2;
        rev=bit*pow(10,i++)+rev;
        n=n/2;
    }
return rev;
}
int main(){
    int n;
    cout<<"ENTER A NUMBER :";
    cin>>n;
    int binaryNo = decimalIntoBinary(n);
    cout<<binaryNo<<endl;
}