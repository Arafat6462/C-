#include<iostream>
using namespace std;
int main(){
    int n, a,b,c,temp;
    cin >> n;
    temp = n;
    while (n--)
    {
         cin>>a>>b>>c;
         if(a==0 && b==0 || a==0 && c==0 || b==0 && c==0)
         temp --;
    }
    
    cout<<temp<<endl;
}