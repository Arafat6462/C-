
#include<iostream>
#include <queue>

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

	q.push(1); // add to end/last of queue.
	q.push(10);
	q.push(3);
	q.push(4);


	while (!q.empty())
	{
		int x = q.front(); // front = left/top first value.
		cout << x << endl;
		q.pop(); // remove first/start/left/top of queue.
	}


}

