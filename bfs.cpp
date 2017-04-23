#include<iostream>

using namespace std;

int q[50], front=0, rear=-1;

void insert_q(int ele)
{
	q[++rear]=ele;
}

int delete_q()
{
	if(front>rear) 
		return -1;
	return q[front++];
}

int G[4][4]={	{0, 0, 0, 0},
				{0, 0, 1, 1},
				{0, 1, 0, 1},
				{0, 1, 1, 0}	};	

int visited[4]={0,0,0,0}				;

void bfs(int v)
{
	visited[v]=1;
	cout<<v<<" ";

	for(int i=0; i<4; ++i)
		if( (G[v][i]==1) && (visited[i]!=1) )
		{
			visited[i]=1;
			insert_q(i);
		}

	int u;
	while((u=delete_q())!=-1)
		bfs(u);
}								

int main()
{
	bfs(1);

	return 0;
}