#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF ROWS :";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if( j==1 || i==j || i==n){
            cout<<j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}    