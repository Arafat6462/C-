
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

	long long int n, m, k, sum = 0;

	cin >> n >> m >> k;
	std::vector<long long int>des(n), has(m);

	for (int i = 0; i < n; i++)
		cin >> des[i];

	for (int i = 0; i < m; i++)
		cin >> has[i];

	sort(has.begin(), has.end());


	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(has.begin(), has.end(), des[i] - k);
		auto it2 = upper_bound(has.begin(), has.end(), des[i] + k);


		for (int j = it - has.begin(); j < it2 - has.begin() ; j++)
		{
			if (has[j] >= des[i] - 5)
			{
				sum++;
				has[j] = -1;
				break;
			}
		}




	}
	cout << sum;
}
