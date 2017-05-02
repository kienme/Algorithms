#include<iostream>

using namespace std;

int n = 4, tour_brute[10], cost_brute = 999, v[10], k = 0;

int G[4][4]={	{0, 1, 3, 6},
				{1, 0, 2, 3},
				{3, 2, 0, 1},
				{6, 3, 1, 0}		};

void display(int arr[])
{	for(int q = 0; q < n; ++q) cout<<arr[q]<<" ";	}			

void tsp_brute(int cur)
{
	if(cur == n)
	{
		int t_cost = 0;

		for(int i = 0; i < n-1; ++i)
			t_cost += G[v[i]][v[i+1]];
		t_cost += G[v[n-1]][v[0]];

		if(t_cost < cost_brute)
		{
			cost_brute = t_cost;
			for(int j = 0; j < n; ++j)
				tour_brute[j] = v[j];
		}
	}

	else
		for(int i = cur; i < n; ++i)
		{
			int temp = v[cur]; v[cur] = v[i]; v[i] = temp;
			tsp_brute(cur+1);
			temp = v[cur]; v[cur] = v[i]; v[i] = temp;
		}
}	

int main()
{
	for(int i = 0; i < n; ++i)
		v[i] = i;	

	tsp_brute(0);
	display(tour_brute);
	cout<<"\nCost: "<<cost_brute<<endl;

	return 0;
}