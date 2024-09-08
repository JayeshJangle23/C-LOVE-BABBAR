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
    int l=0,r=n-1,ind=n-1,pivotindex;
    for(int k=0;k<n;k++){
        int suml=0,sumr=0;
        for(int i=l;i<ind;i++){
            suml=suml+arr[i];
        }
        for(int i=ind+1;i<=r;i++){
            sumr=sumr+arr[i];
        }
        if(suml==sumr){
            pivotindex=ind;
            cout<<pivotindex;
            break;
        }
        ind--;
    } 
    
}
