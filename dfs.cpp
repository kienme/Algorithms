#include<iostream>

using namespace std;

int n=5, visited[5]={0,0,0,0,0}, count=1;;

/*int G[5][5]={	{0, 1, 1, 1, 0},
				{1, 0, 0, 1, 0},
				{1, 0, 0, 0, 1},
				{1, 1, 0, 0, 1},
				{0, 0, 1, 1, 0}		};*/

int G[4][4]={	{0, 0, 0, 0},
				{0, 0, 1, 1},
				{0, 1, 0, 1},
				{0, 1, 1, 0}	};				

void dfs(int v)
{
	cout<<v<<" ";
	visited[v]=1;

	for(int i=0; i<n; ++i)
		if( (G[v][i]==1) && (visited[i]!=1) )
		{
			++count;
			visited[i]=1;
			dfs(i);
		}
}
			
int main()
{

	dfs(1);
	if(count<n)
		cout<<"dis";
	cout<<"connected";

	return 0;
}