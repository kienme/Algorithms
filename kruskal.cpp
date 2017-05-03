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

    int parent[6] = { -1, -1, -1, -1, -1, -1 };

    int num_edges = 1;
    int min, u, v;
    int cost = 0;

    while(num_edges < 6)
    {
        min = 999;

        //Find minimum length edge from the graph
        for(int i = 0; i < 6; ++i)
            for(int k = 0; k < 6; ++k)
                if(G[i][k] < min)
                {
                    min = G[i][k];
                    u = i;
                    v = k;
                }
        
        //Copy to temporary variables
        int t_u = u;
        int t_v = v;

        //Find node connected to 'u' and 'v'
        while(parent[t_u] != -1)
            t_u = parent[t_u];

        while(parent[t_v] != -1)
            t_v = parent[t_v];

        //If 'u' and 'v' do not have a common parent, joining them does not form a loop
        if(t_u != t_v)
        {
            num_edges++;
            cost += min;
            parent[v] = u;

            cout<<v<<"->"<<u<<"\n";
        }

        //Set distance between the nodes as infinity. Consider using a copy of the graph to preserve original
        G[u][v] = G[v][u] = 999;
    }

    cout<<"Total cost: "<<cost;

    return 0;
}