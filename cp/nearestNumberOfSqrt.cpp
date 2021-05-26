#include<iostream>
#include<math.h>
 using namespace std;
int main(){
     
   double result;
   int input;
  
   cin>>input;
   result = sqrt(input);
 
    int i = result;
    if(i == result)
    {
       cout<< i;
    }

    else
    {
        int a = i*i;
        int b = (i+1)*(i+1);
        int x,y;
        x = fabs(input - a);
        y = fabs(input - b);

        x>y? cout<<(i+1) : cout<<i;
        

    }

 

 

     
}