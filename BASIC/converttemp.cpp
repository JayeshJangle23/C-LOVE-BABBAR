#include<iostream>
using namespace std;
double tempconvertor(int temp){
    double kelvin,ferhenite;
    kelvin = temp + 273;
    ferhenite = temp * 1.80 + 32.00 ;
    double t[2] = {kelvin , ferhenite};
    return t[2];
}
int main(){
    double celcius;
    cout<<"ENTER NUMBER : ";
    cin>>celcius;
    double temp[2];
    //temp = tempconvertor(celcius);

}   