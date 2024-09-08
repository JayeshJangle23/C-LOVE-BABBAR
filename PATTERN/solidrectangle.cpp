#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"ENTER NUMBER OF ROWS :";
    cin>>m;
    cout<<"ENTER NUMBER OF COLUMNS :";
    cin>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}