
#include<iostream>
using namespace std;


void inputOutput()
{
#ifndef ONLINE_JUDGE
	freopen("../cp/input.txt", "r", stdin);
	freopen("../cp/output.txt", "w", stdout);
#endif
}


int main()
{
	inputOutput();

	long long int k, n;
	cin >> n >> k;

	while (k--)
	{
		if (n % 10 == 0)
		{
			n /= 10;
		}
		else
			n--;

	}

	cout << n << endl;


}

