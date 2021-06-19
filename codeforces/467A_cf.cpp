
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

	int n, sum = 0;
	cin >> n;
	while (n--)
	{
		int p, q;
		cin >> p >> q;
		if (q - p >= 2)
			sum++;
	}

	cout << sum;


}

