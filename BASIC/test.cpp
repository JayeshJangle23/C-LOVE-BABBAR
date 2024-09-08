#include<iostream>
using namespace std;
int power(double x,int n )
{
  double answer=1;
       for(int i=1;i<=n;i++){
        answer = answer * x ;
       } 
       return answer;
}


int main(){
  double x,ans;
  int n;
cout<<"VALUE OF X AND N IS : ";
cin>>x>>n;
ans = power(x,n);
cout<<ans;
}