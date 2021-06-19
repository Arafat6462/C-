
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

	int t, n;
	cin >> t;
	bool b = false;
	while (t--)
	{
		cin >> n;
		if (n == 1) {
			b = true;
			break;
		}


	}
	cout << (b ? "HARD" : "EASY");


}

