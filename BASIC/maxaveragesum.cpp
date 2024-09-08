#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n,k;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER "<<i+1<<" VALUE : ";
        cin>>arr[i];
    }
    cout<<"ENTER SUBARRAY NO. : ";
    cin>>k;
    int i=0,j=k-1; 
    int sum1=INT_MIN;
    while(j<=n){
        int sum2=0;
        for(int l=i;l<j;l++){
            sum2=sum2+arr[l];
        }
        if(sum1<sum2){
            cout<<"MAX : "<<sum1<<endl;
            sum1=sum2;
            cout<<"MAX SUM : "<<sum1<<endl;
        }
        i++;
        j++;
    }
    double max=sum1/k;
    cout<<"MAX SUM OF SUBARRAY IS : "<<max<<endl;
}
