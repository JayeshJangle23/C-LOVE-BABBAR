#include<iostream>
using namespace std;
void areaOfCircle(float r){
    float area = 3.14* r * r ;
    cout<<"THE AREA OF CIRCLE IS : "<<area;
    return ;
}
int main(){
    int radius;
    cout<<"ENTER RADIUS OF CIRCLE : ";
    cin>>radius;
    areaOfCircle(radius);
    
}