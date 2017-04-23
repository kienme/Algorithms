#include<iostream>

using namespace std;

int main()
{
	int G[6][6] = {{0, 3, 999, 999, 6, 5},
					{3, 0, 1, 999, 999, 4},
					{999, 1, 0, 6, 999, 4},
					{999, 999, 6, 0, 8, 5},
					{6, 999, 999, 8, 0, 2},
					{5, 4, 4, 5, 2, 0}} ;

	/*int G[4][4] = {{0, 8, 2, 4},
					{8, 0, 5, 999},
					{2, 5, 0, 3},
					{4, 999, 3, 0}} ;*/

	int T[6][6];					

	int visited[6] = {0, 0, 0, 0, 0, 0};
	int min, u, v, cost = 0;

	visited[0] = 1;

	for(int i=1; i<6; ++i)
	{
		min = 999;

		for(int j=0; j<6; ++j)
		{
			if(visited[j]==1)
			{
				for(int k=0; k<6; ++k)
				{
					if(visited[k]!=1)
					{
						if(G[j][k]<min)
						{
							min = G[j][k];
							u = j;
							v = k;
						}
					}
				}
			}
		}

		visited[v] = 1;
		cost += G[u][v];

		cout<<v+1<<"-->"<<u+1<<"\n";
	}

	return 0;
}