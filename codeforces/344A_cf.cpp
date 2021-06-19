
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

	int t, sum = 0;
	string tem = "", val = "";
	cin >> t;
	while (t--)
	{
		cin >> tem;
		if (tem != val)
		{
			val = tem;
			sum++;
		}

	}

	cout << sum;

}

