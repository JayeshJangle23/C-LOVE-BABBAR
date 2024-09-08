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
    cout<<"ENTER TARGET :";
    cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            index=i;
            count++;
        }
    }
    if(count>0){
        cout<<target<<" IS FOUND IN "<<index+1<<" PLACE IN THE ARRAY";
    }
    else{
        cout<<target<<"IS NOT FOUND IN THESE ARRAY ";
    }
}