
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

	string t, s;
	bool b = true;
	cin >> t >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (t[i] != s[s.length() - (i + 1)])
		{
			b = false;
			break;
		}
	}

	b ? cout << "YES" << endl : cout << "NO" << endl;

}

