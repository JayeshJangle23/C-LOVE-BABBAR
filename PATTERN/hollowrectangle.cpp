#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"ENTER NUMBER OF ROWS :";
    cin>>m;
    cout<<"ENTER NUMBER OF COLUMNS :";
    cin>>n;
    for(int i=0;i<m;i++){
        if(i==0 || i==m-1){
            for(int j=0;j<n;j++){
                cout<<" * ";
                if(j==0 || j==n){
                    cout<<" * ";
                }
            }
        }
        else{
            cout<<" * ";
            for(int i=1;i<n;i++){
                cout<<"   ";
            }
            cout<<" * ";
        }
        cout<<endl;
    }
}