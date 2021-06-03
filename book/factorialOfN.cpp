
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


int fact(int n)
{
	int fact = 1;
	bool b = false;

	if (n < 0)
	{
		n = fabs(n);
		b = true;
	}

	while (n > 0)
	{
		fact *= n;
		n--;
	}

	return b ? fact * -1 : fact;
}


int main()
{
	inputOutput();

	int n, r;
	cin >> n >> r;

	cout << "factorial of n : " << fact(n) << endl;
	cout << "factorial of n/r(n-r) : " << fact(n) / (fact(r)*fact(n - r)) << endl;


}

