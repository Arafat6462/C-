
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

	int n, q;
	string s;
	cin >> n >> q;
	cin >> s;
//-------------------------------------------------------------------------------------- -

	while (q--)
	{
		int l, r;
		cin >> l >> r;

		long long int arr[n + 1];
		arr[0] = 0;

		for (int i = 1; i <= n ; ++i)
		{
			arr[i] = arr[i - 1] + s[i - 1] - 'a' + 1;
		}


		cout << arr[r] - arr[l - 1] << endl;
	}
}

