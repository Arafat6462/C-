
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

	int a, b;
	int c = 0;
	cin >> a >> b;

	while (b >= a)
	{
		a *= 3;
		b *= 2;
		c++;

	}

	cout << c << endl;

}

