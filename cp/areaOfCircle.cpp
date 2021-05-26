#include<iostream>
#include<math.h>
using namespace std;
int main(){

    double r,area,pi;
    cin>>r;
    pi = acos(-1); // cos pi = -1.   so, acos(-1) = pi.
    area = pi * r * r;
    cout<<"area is : "<<area<<endl;

    cout<<sqrt(25)<<endl;
    cout<<fabs(sqrt(25)*-3)<<endl;
    cout<<"sin 60 : "<<sin(91)<<endl;
    cout<<"asin 60 : "<<asin(1)<<endl;
}