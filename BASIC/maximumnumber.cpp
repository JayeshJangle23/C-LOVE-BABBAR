#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER 1st NUMBER :";
    cin>>a;
    cout<<"ENTER 2nd NUMBER :";
    cin>>b;
    cout<<"ENTER 3rd NUMBER :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" IS GREATER "<<endl;
        }
        else{
            cout<<c<<" IS GREATER "<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<" IS GREATER "<<endl;
        }
        else{
            cout<<c<<" IS GREATER "<<endl;
        }
    }
}
