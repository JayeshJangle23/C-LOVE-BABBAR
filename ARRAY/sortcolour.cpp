#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,j=0;
    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENT OF ARRAY : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<"\t";
        }
    }
