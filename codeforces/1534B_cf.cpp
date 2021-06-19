
#include<iostream>
#include <math.h>
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
		long long int n, ope = 0 , cost = 0, temp = 0;
		cin >> n;
		long long int arr[n + 2];
		arr[0] = 0;
		arr[n + 1] = 0;

		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 1; i <= n; i++)
		{
			if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			{
				temp = min(arr[i] - arr[i - 1], arr[i] - arr[i + 1]);
				ope += temp;
				arr[i] = max(arr[i - 1], arr[i + 1]);
			}
			cost += fabs(arr[i] - arr[i - 1]);
		}

		cost += arr[n];

		cout  << cost + ope << endl;



	}


}


