#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENT OF ARRAY : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,ans=-1;
    for(int i=0;i<n;i++){
        int index=(abs(arr[i]));
        if(arr[index]<0){
            cout<<"THE DUPLICATE ELEMENT WILL BE : "<<arr[i];
        }
        arr[index]*=ans;
    }
}
