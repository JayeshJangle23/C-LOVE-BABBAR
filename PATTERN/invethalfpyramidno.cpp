#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"ENTER NUMBER OF ROWS :";
    cin>>m;
    for(int i=0;i<=m;i++){
            for(int j=0;j<=m-i;j++){
                cout<<" "<<j+1<<" ";
            }
            cout<<endl;
        }
        
    }
