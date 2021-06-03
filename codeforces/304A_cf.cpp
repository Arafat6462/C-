//3 6 9 12

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

	int k, n, w, total = 0;
	cin >> k >> n >> w;

	for (int i = 1; i <= w; i++)
	{
		total += k * i;
	}

	total > n ? cout << total - n : cout << 0;

}

