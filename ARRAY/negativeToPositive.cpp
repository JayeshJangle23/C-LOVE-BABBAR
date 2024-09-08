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
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<"\t";
        }
    }
