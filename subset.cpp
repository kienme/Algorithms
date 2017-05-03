#include<iostream>

using namespace std;

int M = 7;                                //Value of the total sum
int val[6] = {1, 2, 4, 5, 6, 999};        //Given values in increasing order and last one set to a high value
int selected[6] = {0, 0, 0, 0, 0, 0};

void display()
{
    for(int i=0; i<6; ++i)
        if(selected[i]==1)
            cout<<val[i]<<" ";
    cout<<"\n";
}

void sumofsub(int cur_sum, int k)
{
    selected[k]=1;

    //Check if we got M already
    if(cur_sum+val[k]==M)
        display();

    //If not, try including next element too
    else if(cur_sum+val[k]+val[k+1] <= M)
        sumofsub(cur_sum+val[k], k+1);

    //Also check by leaving out current element
    selected[k] = 0;
    if(cur_sum+val[k+1] <= M) 
        sumofsub(cur_sum, k+1);
}

int main()
{
    sumofsub(0, 0);

    return 0;
}