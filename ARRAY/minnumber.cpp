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
    int min=INT_MAX;
    cout<<min<<endl;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"THE MINIMUM ELEMENT IN THE ARRAY IS "<<min;
}
