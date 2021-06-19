
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

	int t;
	cin >> t;
	while (t--)
	{
		int n, mi = 1, ma = 1;
		cin >> n;
		int arr[n];
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			if (arr[i] > arr[ma])
				ma = i;
			if (arr[i] < arr[mi])
				mi = i;

		}

		int x, y, z;
		x = max(mi, ma);
		y = min(mi, ma);
		z = y + ((n + 1) - x);
		y = (n + 1) - y;

		cout << min(x, min(y, z)) << endl;


	}


}

