#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    int k;
    cout<<"ENTER SET POSITION : ";
    cin>>k;

    int mask = 1<<k;
    int value = n | mask;
    cout<< "THE VALUE IS "<<value<<endl;
}   