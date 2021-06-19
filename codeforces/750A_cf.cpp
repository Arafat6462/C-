
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

	int n, k;
	cin >> n >> k;

	int time = 0, problem = 0;
	time = 240 - k;

	for (int i = 1; i <= n; i++)
	{
		time -= i * 5;
		if (time >= 0) problem++;
		else break;

	}

	cout << problem << endl;


}

