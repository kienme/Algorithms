#include<iostream>

using namespace std;

int col[20];

//Returns absolute value
int abs(int a)
{	return a < 0 ? -a : a;	}

//Prints col array
void print_col(int N)
{
	for(int i = 0; i < N; ++i)
		cout<<col[i]<<"   ";

	cout<<"\n";
}

//Checks if queen can be placed in row 'r' and column 'c'
int place(int r, int c)	
{
	for(int i = 0; i < r; ++i)
		if( (col[i] == c)    						//Same column
			|| (abs(col[i]-c) == abs(i-r)) )		//Same diagonal
			return 0;

	return 1;
}

//Check for queen's placement starting at the kth row
void nq(int N, int k)
{
	//For each column
	for(int i = 0; i < N; ++i)
		//Can be placed at row k, col i
		if(place(k, i))
		{
			col[k] = i;

			//Reached last row successfully
			if(k == N-1) 
				print_col(N);

			//Check the next row
			else	
				nq(N, k+1);
		}
}

int main()
{
	//4x4 board. Start with row 0
	nq(4, 0);

	return 0;
}