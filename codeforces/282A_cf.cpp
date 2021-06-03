#include<iostream>
using namespace std;
int main(){
    int n,sum =0;
    string s;
    cin>>n;
    while (n--)
    {
         cin>>s;
         if(s[0] == '+') ++sum;
         if(s[2] == '+') sum++;
         if(s[0] == '-') --sum;
         if(s[2] == '-') sum--;

    }
    cout<<sum<<endl;
}