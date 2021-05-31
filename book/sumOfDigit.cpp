#include<iostream>
using namespace std;
int main(){

    int input, sum = 0, remainder, temp;
    cin>>input;
    temp = input;

    while (temp)
    {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    cout<<"sum of each digit of "<<input<<" is : "<< sum;
    
}