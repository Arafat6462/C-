
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

	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i ++)
	{
		cout << (s1[i] != s2[i] ? 1 : 0);
	}


}

