#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,c=0;
    long long int sum =0;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

 
    for (int i =n-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
    for (int i = n-1; i >=0; i--)
    {
        sum +=arr[i];
          if (sum>=0) 
         {
            c++;
         }
         else
         break;
         
    }
    cout<<c<<endl;
    

    
}