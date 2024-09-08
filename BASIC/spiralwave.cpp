#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"ENTER ROWS OF ARRAY : ";
    cin>>m;
    int n;
    cout<<"ENTER COLUMN OF ARRAY : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int iteration=m*n;
    int count=0;
    int startingrow=0,endingrow=m-1;
    int endingcol=n-1,startingcol=0;
    while(count<iteration){
    for(int i=startingcol;i<endingcol&&count<iteration;i++){
        cout<<arr[startingrow][i]<<" ";
        count++;
    }
    startingrow++;
    for(int i=startingrow;i<endingrow&&count<iteration;i++){
        cout<<arr[i][endingcol]<<" ";
        count++;
    }
    endingcol--;
    for(int i=endingcol;i>=startingcol&&count<iteration;i--){
        cout<<arr[endingrow][i]<<" ";
        count++;
    }
    endingrow--;
    for(int i=endingrow;i>=startingrow&&count<iteration;i--){
        cout<<arr[i][startingcol]<<" ";
        count++;
    }
    startingcol++;
}
}

