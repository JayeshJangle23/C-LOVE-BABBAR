#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n,zero=0,one=0,count=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER "<<i+1<<" VALUE : ";
        cin>>arr[i];
    }
    int temp;
    for(int i=n-1;i<0;i--){
        temp=arr[n-1];
        arr[i]=arr[i-1];
        cout<<arr[i]<<endl;
        if(arr[n-1]==arr[1]){
            zero=-1;
        }
        
    }
}