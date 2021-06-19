
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

	long long int t;
	cin >> t;
	while (true)
	{
		cout << t << " ";
		if (t == 1)
			break;
		if (t % 2 == 0)
			t /= 2;
		else
			t = (t * 3) + 1;

	}


}

