
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

	int n, p;
	bool b = false;
	cin >> n >> p;
	int arr[p], arr2[p];
	for (int i = 0; i < p; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < p; ++i)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < p; ++j)
		{
			if (arr[j] == i + 1 || arr2[j] == i + 1)
			{
				b = true;
				break;
			}
			else
			{
				b = false;
			}
		}
		if ( !b)
			break;
	}

	if (b)cout << "I become the guy.";
	else cout << "Oh, my keyboard!";

}

