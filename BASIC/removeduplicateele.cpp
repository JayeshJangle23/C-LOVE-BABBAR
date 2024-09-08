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
    int j=1,i=0,k=0;
    while(j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            i++;
            swap(arr[i],arr[j]);
            j++;
            k++;
        }
    }
    for(int i=0;i<k+1;i++){
        cout<<arr[i]<<"\t";
    }
}
