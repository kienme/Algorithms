#include<iostream>

using namespace std;

int main()
{
    int G[6][6] = {    {0  , 3  , 999, 999, 6  , 5  },
                       {3  , 0  , 1  , 999, 999, 4  },
                       {999, 1  , 0  , 6  , 999, 4  },
                       {999, 999, 6  , 0  , 8  , 5  },
                       {6  , 999, 999, 8  , 0  , 2  },
                       {5  , 4  , 4  , 5  , 2  , 0  }    };

    int visited[6] = {0, 0, 0, 0, 0, 0};
    int min, u, v, cost = 0;

    //Start from first node
    visited[0] = 1;

    for(int i = 0; i < 6-1; ++i)
    {
        min = 999;

        //Find nearest unvisited node from a visited node
        for(int j = 0; j < 6; ++j)
            if(visited[j] == 1)
                for(int k = 0; k < 6; ++k)
                    if(visited[k] != 1)
                        if(G[j][k] < min)
                        {
                            min = G[j][k];
                            u = j;
                            v = k;
                        }

        //Mark as visited and display the edge
        visited[v] = 1;
        cost += G[u][v];

        cout<<v<<"-->"<<u<<"\n";
    }

    cout<<"Total cost: "<<cost;

    return 0;
}