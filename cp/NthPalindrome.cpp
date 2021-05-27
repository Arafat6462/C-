#include<iostream>
#include<math.h>
using namespace std;

int reverseNumber(int n)
{
    int rev = 0, temp = n , remainder;
    while (temp)
    {
        remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp /= 10;
    }

    return rev;
    
}
bool isPalindrome(int n)
{
    return n == reverseNumber(n);
}


int nthPalindrome(int n, int k)
{
    int minValue = pow(10, k-1);

    while (true)
    {
        if(isPalindrome(minValue))
        {
            --n;
        }
        if (!n)
        {
            break;
        }

        ++minValue;
        
    }
    return minValue;
    
}

int main(){

    int n,k;
    cout<<"Enter nth number of palindrome : ";
    cin>>n;
    cout<<"Enter digit number of plindrome :";
    cin>>k;

    cout<<n <<"th palindrome of "<<k<<" digit is : "<<nthPalindrome(n,k)<<endl;
}