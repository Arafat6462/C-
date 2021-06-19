
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

	int n;
	cin >> n;
	int arr[n + 1];
	arr[n] = -1;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int len = 0, a = -1, pre = 0, curr = 0;

	for (int i = 0; i <= n; i++)
	{
		if (a != arr[i])
		{
			if (len < min(pre, curr))
				len = min(pre, curr);
			pre = curr;
			a = arr[i];
			curr = 1;
		}
		else
		{
			curr++;
		}
	}

	cout << len * 2;




}
