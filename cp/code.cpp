
#include<iostream>
#include <math.h>
using namespace std;


void inputOutput()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main()
{
	inputOutput();

	long long int  n;
	cin >> n;
	bool b = true;
	// for (int i =2; i < n; i++)
	// {
	//     if (n%i == 0)
	//     {
	//        b = false;
	//     }

	// }


	// sqrt(n)/2
	for (int i = 2; i <= sqrt(n); i ++)
	{
		if (n % i == 0)
		{
			b = false;
		}

	}
	cout << n << " is prime : " << boolalpha << b << endl;


}

