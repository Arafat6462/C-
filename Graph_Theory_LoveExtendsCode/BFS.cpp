
#include<iostream>
#include <queue>
#include<climits>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];

int parent[100];
int dis[100];

int node, edge;



void bfs(int startingNode)
{
	for (int i = 0; i < node; ++i)
	{
		color[i] = WHITE;
		dis[i] = INT_MIN; // INT_MIN=-2147483648. Initital dis from parent is dummy.
		parent[i] = -1; // intitially set no parent of all node.
	}

	dis[startingNode] = 0; // dis of parent/starting node is '0'
	parent[startingNode] = -1; // parent of starting/parent is none/-1.


	queue<int> q;
	q.push(startingNode); // first value of queue/dfs is '0'.


	while (!q.empty())
	{
		int x;
		x = q.front();
		q.pop();
		color[x] = GRAY; // gray for working with x
		cout << x << " "; // visiting order.

		// some work
		for (int i = 0; i < node; ++i)
		{
			if (adj[x][i] == 1) // find all neighbour of x
			{
				if (color[i] == WHITE) // neighbour is white
				{
					dis[i] = dis[x] + 1; // 'i' is child of 'x', so distance of 'i' is (x+1)
					parent[i] = x; // 'X' is the parent of this neighbour. 'X'=parent, 'i'=child.
					q.push(i);	  // if find white neighbour of 'x' then push to queue.
				}
			}
		}

		color[x] = BLACK; // balck for work done with x.
	}


}




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

	cin >> node >> edge;

	int n1, n2;

	// input of all edge/connection of node
	for (int i = 0; i < edge; ++i)
	{
		cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;

	}

	// print all value.
	cout << "adjacent matrix : " << endl;
	for (int i = 0; i < node; ++i)
	{
		for (int j = 0; j < node; ++j)
		{
			cout << adj[i][j] << " ";
		}
		cout << endl;
	}


	bfs(0); // '0' is starting.


	// print parent node.
	for (int i = 0; i < node; ++i)
	{
		cout << "\nparent of " << i << " is : " << parent[i];
	}


	cout << "\n\n";
	// print distance node.
	for (int i = 0; i < node; ++i)
	{
		cout << "\ndistance of " << i << " is : " << dis[i];
	}




}

// input.

// 8 7
// 0 1
// 0 2
// 1 3
// 2 4
// 2 5
// 3 6
// 3 7



