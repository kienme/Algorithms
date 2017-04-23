#include<iostream>

using namespace std;

int n=4, visited[10], tour_app[10], tour_brute[10], cost_app=0, cost_brute=999, v[10], k=0;

//source is zero

int G[4][4]={	{0, 1, 3, 6},
				{1, 0, 2, 3},
				{3, 2, 0, 1},
				{6, 3, 1, 0}		};

void display(int arr[])
{	for(int q=0; q<n; ++q) cout<<arr[q]<<" ";	}	

void tsp_app(int cur)
{
	int u, min=999;

	for(int i=0; i<n; ++i)
		if(visited[i]!=1 && G[cur][i]<min && G[cur][i]!=0)
		{
			min=G[cur][i];
			u=i;
		}

	if(min!=999)
	{
		visited[u]=1;
		cost_app+=G[cur][u];
		tour_app[k++]=u;
		tsp_app(u);
	}
	else
	{
		cost_app+=G[cur][0];
	}
}		

void tsp_brute(int cur)
{
	int t_cost=0;
	if(cur==n)
	{
		for(int i=0; i<n-1; ++i)
			t_cost+=G[v[i]][v[i+1]];
		t_cost+=G[v[n-1]][v[0]];

		if(t_cost<cost_brute)
		{
			cost_brute=t_cost;
			for(int j=0; j<n; ++j)
			{
				tour_brute[j]=v[j];
			}
		}
	}
	else
	{
		for(int i=cur; i<n; ++i)
		{
			int temp=v[cur]; v[cur]=v[i]; v[i]=temp;
			tsp_brute(cur+1);
			temp=v[cur]; v[cur]=v[i]; v[i]=temp;
		}
	}
}	

int main()
{
	for(int i=0; i<n; ++i)
	{
		visited[i]=0;
		v[i]=i;
	}	

	visited[0]=1;
	tour_app[k++]=0;
	
	tsp_app(0);
	display(tour_app);
	cout<<"\napp cost: "<<cost_app<<endl;

	tsp_brute(1);
	display(tour_brute);
	cout<<"\nbrute cost: "<<cost_brute<<endl;

	return 0;
}