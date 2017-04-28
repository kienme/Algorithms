# Algorithms
Simple, small sized implementation of select algorithms in C++

## 1. Breadth First Search (BFS)
### Algorithm
G is the adjacency matrix representing the graph.  
'visited' array marks nodes as visited.

bfs(v):
1. Mark 'v' as visited and print it  
2. For each node in G connected to 'v' and unvisited, mark node as visited and add it to the queue  
3. For each node 't' in the queue call bfs(t)  

[Wikipedia](https://en.wikipedia.org/wiki/Breadth-first_search)

## 2. Depth First Search (DFS)
### Algorithm
G is the adjacency matrix representing the graph.  
'visited' array marks nodes as visited.

dfs(v):
1. Mark 'v' as visited and print it  
2. For each node 't' in G connected to 'v' and unvisited, mark node as visited and call dfs(t)  

[Wikipedia](https://en.wikipedia.org/wiki/Depth-first_search)

## 3. Dijkstra's Algorithm
### Algorithm
G is the adjacency matrix representing the graph (999 represents ∞).  
'v' is the source node from which shortest distance is computed.  
'visited' array marks nodes as visited.  
'dist' holds shortest distances from the source vertex.  

1. Update distance array with distances from the source vertex (with values from the graph)
2. Mark source vertex as visited
3. Find nearest unvisited vertex 'u' from source
4. For every node 'k' in the graph, check if distance from source to 'k' is less than sum of distances from source to 'u' and 'u' to 'k'
5. If not, update distance to the new minimum
6. Repeat from step 3 until all vertices are marked as visited  

[Wikipedia](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)

## 4. Floyd-Warshall Algorithm
### Algorithm
G is the adjacency matrix representing the graph (999 represents ∞). 
'dist' matrix holds the shortest distance values

1. Initialize dist with G
2. Consider each node 'i' in the graph as an intermediate node
3. For every pair of vertices 'j' and 'k', check if distance from 'j' to 'k' is shorter than sum of distances from 'j' to 'i' and 'i' to 'k'
4. If not, update dist with the minimum value

[Wikipedia](https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm)

## 5. Kruskal's Algorithm
[Wikipedia](https://en.wikipedia.org/wiki/Kruskal's_algorithm)

## 6. N-Queen's Problem 
[Wikipedia](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

## 7. Prim's Algorithm
[Wikipedia](https://en.wikipedia.org/wiki/Prim's_algorithm)

## 8. Subset Sum Problem
[Wikipedia](https://en.wikipedia.org/wiki/Subset_sum_problem)

## 9. Travelling Salesman Problem
[Wikipedia](https://en.wikipedia.org/wiki/Travelling_salesman_problem)
