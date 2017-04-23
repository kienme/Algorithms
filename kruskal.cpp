#include<iostream>

using namespace std;

int main()
{
	
	/*int G[4][4] = {{0, 8, 2, 4},
					{8, 0, 5, 999},
					{2, 5, 0, 3},
					{4, 999, 3, 0}} ;*/

	int G[6][6] = {{0, 3, 999, 999, 6, 5},
					{3, 0, 1, 999, 999, 4},
					{999, 1, 0, 6, 999, 4},
					{999, 999, 6, 0, 8, 5},
					{6, 999, 999, 8, 0, 2},
					{5, 4, 4, 5, 2, 0}} ;					

	int parent[6] = {0, 0, 0, 0, 0, 0};
	int num_edges = 1;
	int min, u, v;
	int cost = 0;

	while(num_edges < 6)
	{

		min = 999;

		for(int i=0; i<6; ++i)
		{
			for(int k=0; k<6; ++k)
			{
				if(G[i][k]<min)
				{
					min = G[i][k];
					u = i;
					v = k;
				}
			}
		}

		
		int t_u = u;
		int t_v = v;

		while(parent[t_u]!=0)
			t_u = parent[t_u];

		while(parent[t_v]!=0)
			t_v = parent[t_v];

		if(t_u!=t_v)
		{
			num_edges++;
			cost+=min;
			parent[v]=u;

			cout<<v+1<<"->"<<u+1<<"\n";
		}

		G[u][v] = G[v][u] = 999;
	}

	cout<<cost;

	return 0;
}