#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = ceil(s.length()/2.0);
    int arr[n];
     
    for(int i=0; i<n; i++){
        arr[i] = s[i*2] - '0';
     }
  
    
    sort(arr, arr+n);
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
        if(i != n-1)
        cout<<'+';
    }
    
 }