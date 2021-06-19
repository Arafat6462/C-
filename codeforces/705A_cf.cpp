
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
	string li = "I love it", lt = "I love that", hi = "I hate it", ht = "I hate that";
	cin >> t;

	for (int i = 0; i < t - 1; i++)
	{
		if (i % 2 == 0) cout << ht << " ";
		else cout << lt << " ";

	}

	if (t % 2 == 0) cout << li << " ";
	else cout << hi << " ";


}

