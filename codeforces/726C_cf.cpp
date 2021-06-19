
#include<iostream>
#include <algorithm>
#include <vector>
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
		long long int n;
		cin >> n;
		std::vector<long long int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}

		sort(v.begin(), v.end());


		int first = -1;
		int temp = v[n - 1];

		for (int i = 0; i < n - 1; ++i)
		{
			if ((v[i + 1] - v[i]) < temp)
			{
				temp = v[i + 1] - v[i];
				first = i;
			}
		}


		cout << v[first] << " ";

		for (int i = first + 2; i < n; ++i)
		{
			cout << v[i] << " ";
		}

		for (int i = 0; i < first; ++i)
		{
			cout << v[i] << " ";
		}
		cout << v[first + 1] << endl;

	}


}

