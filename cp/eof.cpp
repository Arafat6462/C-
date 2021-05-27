#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n,count =0;
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        count += i;
    }

    cout<<count<<endl;
    cout<<(n*(n+1))/2<<endl;
    
    
}