#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*int m;
    cout<<"ENTER ROWS OF ARRAY : ";
    cin>>m;
    int n;
    cout<<"ENTER COLUMN OF ARRAY : ";
    cin>>n;
    int arr[m][n];
    int check=0,index;*/
    int n1,i=0,j=0,k=0;
    cout<<"ENTER SIZE OF ARRAY 1ST ELEMENT : ";
    cin>>n1;
    int A[n1];
    cout<<"ENTER ELEMENT OF ARRAY : ";
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    int n2;
    cout<<"ENTER SIZE OF ARRAY 2ND ELEMENT : ";
    cin>>n2;
    int B[n2];
    cout<<"ENTER ELEMENT OF ARRAY : ";
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    int n3;
    cout<<"ENTER SIZE OF ARRAY 3RD ELEMENT : ";
    cin>>n3;
    int C[n3];
    cout<<"ENTER ELEMENT OF ARRAY : ";
    for(int i=0;i<n3;i++){
        cin>>C[i];
    }
    while(i<n1&&j<n2&&k<n3){
        if(A[i]==B[j] && B[j]==C[k]){
            cout<<A[i]<<endl;
            i++,j++,k++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    
    
}

