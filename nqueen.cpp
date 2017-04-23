#include<iostream>

using namespace std;

int col[20];

int abs(int a)				//return absolute value
{	return a<0? -a:a;	}

void print_col(int N)		//prints col[] array
{
	for(int i=0; i<N; ++i)
		cout<<col[i]<<"   ";

	cout<<"\n";
}

int place(int r, int c)		//check if queen can be placed in row 'r' and column 'c'
{
	for(int i=0; i<r; ++i)
		if( (col[i]==c)    //same column
			|| (abs(col[i]-c)==abs(i-r)) )	//same diagonal
			return 0;

	return 1;
}

void nq(int N, int k)
{

	for(int i=0; i<N; ++i)
		if(place(k, i))
		{
			col[k]=i;

			if(k==N-1) 
				print_col(N);
			else	
				nq(N, k+1);
		}
}

int main()
{
	nq(4, 0);

	return 0;
}