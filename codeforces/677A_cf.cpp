
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

	int n, h, out = 0, t;
	cin >> n >> h;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		if (t > h)
			out++;
	}

	cout << (n - out) + (out * 2) << endl;



}

