#include<iostream>
#include<math.h>
using namespace std;

float distance (int x1,int x2,int y1, int y2)
{
    double result = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    return result;
}
int  main(){
    cout<<distance(-2,2,-2,1)<<endl;
}