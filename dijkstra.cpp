#include<iostream>

using namespace std;

int G[5][5] = {{0, 3, 999, 7, 999},
					{999, 0, 4, 2, 999},
					{999, 4, 0, 5, 6},
					{7, 2, 5, 0, 4},
					{999, 999, 6, 4, 0}} ;

int v = 0;

int visited[5] = {0, 0, 0, 0, 0};
int dist[5];

int findmin()				//return untraversed vertex with min dist from v
{
	int min_dist = 999;
	int min_vertex = v;

	for(int i=0; i<5; ++i)
		if(visited[i]!=1)
			if(dist[i]<min_dist)
			{
				min_dist = dist[i];
				min_vertex = i;
			}

	return min_vertex;

}

int main()
{
	for(int i=0; i<5; ++i)
		dist[i] = G[v][i];

	visited[v] = 1;

	for(int i=1; i<5; ++i)
	{
		int u = findmin();
		visited[u] = 1;

		for(int k=0; k<5; ++k)
			if(visited[k]!=1)
				if(dist[k]>dist[u]+G[u][k])
					dist[k]=dist[u]+G[u][k];
	}

	for(int i=0; i<5; ++i)
		cout<<dist[i]<<"  ";

	return 0;
}