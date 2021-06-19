
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

	string s;
	bool b = true;
	cin >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] != '4' && s[i] != '7')
		{
			b = false;
			break;

		}
	}


	b ? cout << "YES" << endl : cout << "NO" << endl;

}

