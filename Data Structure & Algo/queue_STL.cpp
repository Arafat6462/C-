
#include<iostream>
#include<queue>
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

	queue <int> q;
	q.push(1);
	q.push(10);
	q.push(3);
	q.push(4);

	q.pop();

	int x = q.front();
	int y = q.back();
	cout << x << endl;
	cout << y << endl;

	while (!q.empty())
	{
		int x;
		x = q.front();
		cout << x << endl;
		q.pop();
	}





}

