#include<iostream>

using namespace std;

int main()
{
    int G[4][4] = {    {0  , 999, 3  , 999},
                       {2  , 0  , 999, 999},
                       {999, 7  , 0  , 1  },
                       {6  , 999, 999, 0  }    };

    int dist[4][4];

    //Initialize dist with G
    for(int j=0; j<4; ++j)
            for(int k=0; k<4; ++k)
                dist[j][k] = G[j][k];

    for(int i=0; i<4; ++i)
        for(int j=0; j<4; ++j)
            for(int k=0; k<4; ++k)
                if(dist[j][k]>(dist[j][i]+dist[i][k]))
                    dist[j][k] = dist[j][i]+dist[i][k];

    //Display 
    for(int j=0; j<4; ++j) 
    {
            for(int k=0; k<4; ++k)
                cout<<dist[j][k]<<"  ";

            cout<<"\n";
    }

    return 0;
}