#include<iostream>

using namespace std;

int q[50], front = 0, rear = -1;

void insert_q(int ele)
{
	q[++rear] = ele;
}

int delete_q()
{
	if(front > rear) 
		return -1;
	return q[front++];
}

//Representation of the graph
int G[4][4]={	{0, 1, 0, 1},
				{1, 0, 1, 0},
				{0, 1, 0, 0},
				{1, 0, 0, 0}	};	

//Mark all nodes as unvisited
int visited[4] = {0,0,0,0};

void bfs(int v)
{
	//Mark current node as visited and display
	visited[v] = 1;
	cout<<v<<" ";

	//For each node
	for(int i = 0; i < 4; ++i)
		//Check if it is connected to current node and unvisited
		if( (G[v][i] == 1) && (visited[i] != 1) )
		{
			//Mark as visited and add to queue
			visited[i] = 1;
			insert_q(i);
		}

	int u;
	//BFS on each node in the queue
	while((u = delete_q()) != -1)
		bfs(u);
}								

int main()
{
	bfs(0);			//Starting node to perform BFS
	return 0;
}