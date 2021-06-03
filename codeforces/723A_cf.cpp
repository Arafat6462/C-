#include<iostream>
#include<algorithm>
using namespace std;
int main(){

     int n,t;
     cin>>t;
     while (t--)
     {
          cin>>n;
            int arr[100];
           for (int i = 1; i <= 2*n; i++)
          {
              cin>>arr[i];
          }

          sort(arr+1,arr+(2*n+1));

        for (int i =1; i <=n; i++)
        {       
           cout<<arr[i]<<" "<<arr[i+n]<<" ";
        }
          
          cout<<endl;
          
     }
     

}