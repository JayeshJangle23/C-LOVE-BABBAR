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
    int k;
    cout<<"ENTER ROTATING VALUE :";
    cin>>k;
    for(int i=0;i<n;i++){
        int j=(i+2)%k;
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }    
}
