#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER "<<i+1<<" VALUE : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"THE "<<i+1<<" VALUE OF ARRAY IS : "<<arr[i]*2<<endl;
    }
}