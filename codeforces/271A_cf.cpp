
#include<iostream>
#include <string>
using namespace std;


void inputOutput()
{
#ifndef ONLINE_JUDGE
	freopen("../cp/input.txt", "r", stdin);
	freopen("../cp/output.txt", "w", stdout);
#endif
}



void distinct(string s)
{
	int c = 0;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < s.length(); j++)
		{
			if (s[i] == s[j])
			{
				c++;
			}
		}
	}

	c -= s.length();

	if (c == 0)
		cout << s << endl;
	else
	{
		int y = 0;
		y = stoi(s) + 1;
		distinct(to_string(y));
	}


}

int main()
{
	inputOutput();

	string s;
	cin >> s;

	int a = stoi(s) + 1;
	distinct(to_string(a)) ;


}

