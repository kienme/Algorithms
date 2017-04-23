#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
	int G[4][4] = {{0, 999, 3, 999},
					{2, 0, 999, 999},
					{999, 7, 0, 1},
					{6, 999, 999, 0}} ;

	int shorty[4][4];

	omp_set_num_threads(2);

	for(int j=0; j<4; ++j)
			for(int k=0; k<4; ++k)
				shorty[j][k] = G[j][k];

	#pragma omp parallel for

	for(int i=0; i<4; ++i)
		for(int j=0; j<4; ++j)
			for(int k=0; k<4; ++k)
				if(shorty[j][k]>(shorty[j][i]+shorty[i][k]))
					shorty[j][k] = shorty[j][i]+shorty[i][k];


	for(int j=0; j<4; ++j) 
	{
			for(int k=0; k<4; ++k)
				cout<<shorty[j][k]<<"  ";

			cout<<"\n";
	}


	return 0;
}