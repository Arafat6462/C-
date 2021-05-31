#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    long long int  n;
    cin>>n;
    bool b = true;

    // for (int i =2; i < n; i++)
    // {
    //     if (n%i == 0)
    //     {
    //        b = false;
    //     }
        
    // }


   // sqrt(n)/2
     for (int i =3; i <=sqrt(n); i+=2)
    {
        if (n%i == 0)
        {
           b = false;
        }
        
     }
        cout<<n<<" is prime : "<<boolalpha<<b<<endl;
    
}