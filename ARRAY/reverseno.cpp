#include<iostream>
#include<limits.h>
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
    int j=n-1;
    for(int i=0;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<"ELEMENT : "<<arr[i]<<endl;
    }
    //cout<<"THE MINIMUM ELEMENT IN THE ARRAY IS ";
}
