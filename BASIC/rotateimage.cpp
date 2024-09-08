#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER SIZE OF ARRAY : ";
    cin>>n;
    int arr[n][n];
    cout<<"ENTER ELEMENT OF ARRAY : ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
    /*int k;
    cout<<"ENTER ROTATING VALUE :";
    cin>>k;*/
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }  
}
