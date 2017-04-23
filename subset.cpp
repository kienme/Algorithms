#include<iostream>

using namespace std;

int M = 5;
/*int val[5]={1, 2, 5, 6, 8};*/
int val[5]={1, 2, 3, 4, 5};
int selected[5]={0, 0, 0, 0, 0};

void sumofsub(int cur_sum, int k, int rem_sum)
{
	selected[k]=1;

	if(cur_sum+val[k]==M)
	{
		for(int i=0; i<5; ++i)
			if(selected[i]==1)
				cout<<val[i]<<" ";
		cout<<"\n";
	}

	else if(cur_sum+val[k]+val[k+1] <= M)
		sumofsub(cur_sum+val[k], k+1, rem_sum-val[k]);

	if( (cur_sum+val[k+1] <= M) && (cur_sum+rem_sum-val[k] >= M) )
	{
		selected[k]=0;
		sumofsub(cur_sum, k+1, rem_sum-val[k]);
	}
}

int main()
{
	sumofsub(0, 0, 15);

	return 0;
}