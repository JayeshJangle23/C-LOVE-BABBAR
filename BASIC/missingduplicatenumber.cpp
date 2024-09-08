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
    int ans=-1;
    for(int i=0;i<n;i++){
        int index=(abs(arr[i]));
        if(arr[index-1]>0)
            arr[index-1]*=ans;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
}
