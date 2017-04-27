#include<iostream>

using namespace std;

int visited[4] = {0, 0, 0, 0};

int G[4][4]={	{0, 1, 0, 0},
				{1, 0, 1, 1},
				{0, 1, 0, 1},
				{0, 1, 1, 0}	};				

void dfs(int v)
{
	//Mark current node as visited and display
	cout<<v<<" ";
	visited[v] = 1;

	//For each node
	for(int i = 0; i < 4; ++i)
		//Check if it is connected to current node and unvisited
		if( (G[v][i] == 1) && (visited[i] != 1) )
		{
			//Mark as visited and call DFS
			visited[i] = 1;
			dfs(i);
		}
}
			
int main()
{
	dfs(2);			//Starting node to perform BFS
	return 0;
}