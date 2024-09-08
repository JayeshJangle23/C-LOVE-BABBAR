#include<iostream>
using namespace std;

int main(){
    int n,rem;
    bool flag = false;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    int rev=0;
    while(n>0){
        //cout<<"hfgygsjler";
        rem = n % 10 ;
        rev=rev * 10 + rem ;
        n = n / 10 ; 
    }
    if(n==rev){
        flag = true;
        return flag;
    }
    else{
        return flag;
    }
}   