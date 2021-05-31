#include<iostream>
#include<math.h>
using namespace std;
int main(){

    long long int n;
    cin>>n;
    bool b = true;
    int co = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 3; j < sqrt(i); j+=2)
        {
            if (i%j==0)
            {
                b = false;
                break;
            }
            
        }
            if(b)
              co++;
 
            b = true;
        
    }

    cout<<co<<endl;
    
}