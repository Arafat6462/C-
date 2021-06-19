
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

	int l = 0, u = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] > 'Z')
			l++;
		else
			u++;
	}


	if (l >= u)
	{
		for (int i = 0; i < s.length(); i++)
		{

			if (s[i] > 'Z')
				cout << s[i];
			else
			{
				char c = s[i] - 'A' + 'a';
				cout << c;
			}
		}
	}


	else
	{
		for (int i = 0; i < s.length(); i++)
		{

			if (s[i] < 'a')
				cout << s[i];
			else
			{
				char c = s[i] - 'a' + 'A';
				cout << c;
			}
		}
	}



}

