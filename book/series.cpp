#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int n, sum = 0;
    cin>>n;

    // 1+2+3+4+5+....+n

    // for (int i = 0; i <= n; i++)
    // {
    //      sum += i;
    // }
    // cout<<"using for loop : "<<sum<<endl;
    // // or
    // cout<<"using formula : "<< n*(n+1)/2<<endl;


    // square of 1+2+3+....+n

    // for (int i = 0; i <=n; i++)
    //     sum +=i*i;
    
    // cout<<"using for loop : "<<sum<<endl;
    // cout<<"using formula : "<<(n*(n+1)*(2*n+1))/6<<endl;



    // cube of 1+2+3+....+n

    // for (int i = 0; i <=n; i++)
    //     sum +=i*i*i;
    
    // cout<<"using for loop : "<<sum<<endl;
    // cout<<"using formula : "<<pow(n*(n+1)/2 ,2)<<endl;
    

//   -0+1-2+3-4+5....+n

    // for (int i = 0; i <=n; i++)
    //     {
    //         if(i%2==0)
    //         {
    //             sum -=i;
    //         }
    //         else
    //         sum +=i;
    //     }
    
    // cout<<"using for loop : "<<sum<<endl;
    // cout<<"using formula : "<<pow(-1,n+1)*ceil(n/2.0)<<endl;




    // 1+(1+2)+(1+2+3)+(1+2+3+4)+....+n
    cout<<"using formula : "<<(n*(n+1)*(n+2))/6<<endl;
    
    
}