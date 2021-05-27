#include<iostream>
using namespace std;
int main(){
    int n, len;
    string word;
    cin>>n;
    while (n--)
    {
        cin>>word;
        len = word.length();
        if(len>10)
        {
            cout<<word[0]<<len-2<<word[len-1]<<endl;
        }
        else
        cout<<word<<endl;
    }
    
}