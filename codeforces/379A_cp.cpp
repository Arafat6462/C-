
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

	int t, A = 0, D = 0;
	string s;
	cin >> t >> s;

	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == 'A')
			A++;
		else
			D++;
	}


	A > D ? cout << "Anton" << endl : A == D ? cout << "Friendship" << endl : cout << "Danik" << endl;

}

