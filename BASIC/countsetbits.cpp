#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    while(n>0){
        if(n%2!=0){
            count++;
        }
        n = n / 2;
    }
    cout<<count;
}