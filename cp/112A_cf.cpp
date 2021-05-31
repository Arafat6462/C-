#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string first,second;
     cin>>first>>second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);
 
    if (first == second )
    {
       cout<<"0"<<endl;

    }
    else
    {
         for (int i = 0; i < first.length(); i++)
         {
              if(first[i] > second[i])
              {
              cout<<"1"<<endl;
              break;
              }

              if(first[i] < second[i]){
              cout<<"-1"<<endl;
              break;
              }

         }
    }
 
}