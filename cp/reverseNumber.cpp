#include<iostream>
using namespace std;
int main(){
    int input, sum = 0, temp, remainder;
    cin>>input;
    temp = input;

    while (temp)
    {
        remainder = temp % 10;
        sum = sum * 10 +remainder;
        temp /= 10;
    }


    cout<<"reverse number of "<<input<<" is : "<< sum<<endl;
     
     input == sum ? cout<<input<<" is polindrome." : cout<< input <<" is not polindrome."<<endl;
    
}