
#include<iostream>
using namespace std;

#define WHITE 1 // value of WHITE is 1;
#define GRAY 2
#define BLACK 3


void inputOutput()
{
#ifndef ONLINE_JUDGE
	freopen("../cp/input.txt", "r", stdin);
	freopen("../cp/output.txt", "w", stdout);
#endif
}


int adj[100][100];
int color[100];

int node, edge;


void dfsVisit(int x)
{
	color[x] = GRAY;

	// find neighbour of (x) with 'white' value then call dfsVisit for 'x'
	for (int i = 0; i < node; ++i)
	{
		if (adj[x][i] == 1)
		{
			if (color[i] == WHITE)
			{
				dfsVisit(i);
			}
		}
	}

	color[x] = BLACK;
}


void dfs()
{
	// initially make all node white
	for (int i = 0; i < node; ++i)
	{
		color[i] = WHITE;  // value of WHITE is 1;
	}

	// check left white node. for disconnected node.
	for (int i = 0; i < node; ++i)
	{
		if (color[i] == WHITE)
		{
			dfsVisit(i);
		}
	}

}



int main()
{
	inputOutput();

	cout << "Enter the number of nodes : ";
	cin >> node;
	cout << "Enter the number of edges : ";
	cin >> edge;

	int n1, n2;

	// input
	for (int i = 0; i < edge; ++i)
	{
		cin >> n1 >> n2;
		adj[n1][n2] = 1;
		adj[n2][n1] = 1;
	}


//----------------------------- for output start ---------------------------------
	// output of 2d matrix
	for (int i = 0; i < node; ++i)
	{
		for (int j = 0; j < node; ++j)
		{
			cout << adj[i][j] << " ";

		}
		cout << endl;
	}

	// neighbor/adjacent node for node (0)
	cout << "\nadjacent node of node :(0)" << endl;
	for (int i = 0; i < node; ++i)
	{
		if (adj[0][i] == 1)
		{
			cout << i << " ";
		}
	}
//----------------------------- for output end ---------------------------------


	dfs();



	// print all node color.
	cout << "\ncolor of all nodes are : " << endl;
	for (int i = 0; i < node; ++i)
	{
		cout << color[i] << " ";
	}




}

