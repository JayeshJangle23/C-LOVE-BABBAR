#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF ROWS :";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0){
            for(int i=0;i<n;i++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
        cout<<"* ";
        for(int j=1;j<=(n/2 + 1)-i;j++){
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
}
}