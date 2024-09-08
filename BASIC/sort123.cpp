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
    int left=0,right=n-1,i=0;
    while(i<=right){
        if(arr[i]==0){
            swap(arr[i],arr[left]);
            left++;
            i++;
        }
        else if(arr[i]==2){
            swap(arr[i],arr[right]);
            right--;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<"\t";
        }
    }
