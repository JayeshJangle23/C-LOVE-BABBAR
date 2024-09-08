#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF ROWS : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(i==1 || i+j==n){
            cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}