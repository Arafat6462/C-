
#include<iostream>
#include <vector>
#include <algorithm>
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
	vector<long long int> v(t);
	for (int i = 0; i < t; i++)
	{
		cin >> v[i];

	}

	sort(v.begin(), v.end());

	long long int sum = 0, temp = -1;
	for (int i = 0; i < t; i++)
	{
		if (v[i] != temp)
		{
			sum++;
			temp = v[i];
		}
	}

	cout << sum;


}

