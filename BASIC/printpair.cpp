#include<iostream>
using namespace std;
int main(){
    int n,target,index,count=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER "<<i+1<<" VALUE : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<"THE PAIR IS : ( "<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
    }
}
}