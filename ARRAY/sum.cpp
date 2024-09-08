#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER "<<i+1<<" VALUE : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"THE SUM OF THE ALL ELEMENTS OF ARRAY IS : "<<sum<<endl;
}