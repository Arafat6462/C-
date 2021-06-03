
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

	int x;
	cin >> x;


	if (x % 5 != 0)
		cout << x / 5 + 1 << endl;
	else
		cout << x / 5 << endl;




}

