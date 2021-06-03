#include<iostream>
using namespace std;
int main(){

    int t, x;
    cin>>t;
    while (t--)
    {
        cin>>x;
        while (x>=0)
        {        
        if(x%111 == 0 || x%11 == 0)
        {
        cout<<"YES"<<endl;
        break;
        }
        else
        x-=111;

        }

        if (x<0)
        cout<<"NO"<<endl;
         

    }
    
}