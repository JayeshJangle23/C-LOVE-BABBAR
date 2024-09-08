#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>0){
        cout<<"NUMBER IS PRIME....";
    }
    else{
        cout<<"NUMBER IS NOT A PRIME NUMBER....";
    } 
}
