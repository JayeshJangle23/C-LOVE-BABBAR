/*Given an integer n, return the number of prime numbers that are 
strictly less than n.
Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10,
they are 2, 3, 5, 7.*/
#include<iostream>
using namespace std;
int main(){
    int n,count=0,k=0;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=2;j<n;j++){
            i=k;
            if(i%j==0){
                k=i;
                count++;
                break;
            }
        }
    }
    if(count>0){
        cout<<count;
    }
    else{
        cout<<count;
    }
}