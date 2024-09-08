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
    int target;
    cout<<"ENTER TARGET VALUE : ";
    cin>>target;
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==target){
            return true;
        }
        else if(arr[low]+arr[high]>target){
            high--;
        }
        else if(arr[low]+arr[high]<target){
            low++;
        }
    } 
    return false;
}
