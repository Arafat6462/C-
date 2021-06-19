
#include<iostream>
#include <vector>
#include <algorithm>
#include <iterator>

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

	long long int t, l, r, n, temp;
	cin >> t;
	while (t--)
	{
		std::vector<long long int> v;

		long long int sum = 0;
		cin >> n >> l >> r;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			v.push_back(temp);
		}

		sort(v.begin(), v.end());





		for (int i = 0; i < v.size() - 1 ; i++)
		{


			auto it = lower_bound(v.begin() + i + 1, v.end(), l - v[i]);
			auto itt = upper_bound(v.begin() + i + 1, v.end(), r - v[i]);

			sum += itt - it;


		}

		cout << sum << endl;

	}


}

