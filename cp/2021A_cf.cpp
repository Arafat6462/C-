#include<iostream>
#include<vector>
using namespace std;
int main(){

    int t;
    int n,m;
    string s;
    cin>>t;
    while (t--)
    {
        vector<int> v;

          cin>>n>>m;
          cin>>s;
 

    for (int j = 0; j < min(n,m); j++)
    {
      for (int i = 0; i <n; i++)
        {
             if(i==0)
             {
                 if(s[i]=='0'  &&  s[i+1]=='1')
                 {
                    v.push_back(i);
                 }
             }
             else if(i==n-1)
             {
                 if (s[i]=='0' && s[i-1] == '1')
                 {
                     v.push_back(i);
                 }  
             }


             else
             {
                if(s[i]=='0' && s[i-1]-'0'+s[i+1]-'0' ==1)
                {
                    v.push_back(i);
                }
             }

        }

             for (int i = 0; i < v.size(); i++)
             {
                 s[v[i]]='1';
             }

             
    }
             cout<<s<<endl;
         
    }
    
}