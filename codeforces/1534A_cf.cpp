
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

	int t;
	cin >> t;
	while (t--)
	{

		int n, m;
		string s;
		cin >> n >> m;
		char arr[n][m];
		bool b = true;
		char fo = '0', re = '0', find = 'R';
		int index = -1;

		// input
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			for (int j = 0; j < m; j++)
			{
				arr[i][j] = s[j];
			}
		}

		// find first letter
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j] != '.')
				{
					index = i + j;
					find = arr[i][j];
					break;
				}
			}
			if (index != -1) break;
		}

		// select first char
		if (index % 2 == 0)
		{
			fo = find;
			if (fo == 'R') re = 'W';
			else re = 'R';
		}
		else
		{
			re = find;
			if (re == 'R') fo = 'W';
			else fo = 'R';
		}


		// check possible or not

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if ((i + j) % 2 == 0)
				{
					if (arr[i][j] == re)
					{
						b = false;
						break;
					}

				}
				else
				{
					if (arr[i][j] == fo)
					{
						b = false;
						break;
					}

				}
			}
			if (!b)break;
		}


		// print final result
		if (b)
		{
			cout << "YES" << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					if ((i + j) % 2 == 0)
						cout << fo;
					else
						cout << re;

				}
				cout << endl;
			}

		}
		else
			cout << "NO" << endl;

	}


}

