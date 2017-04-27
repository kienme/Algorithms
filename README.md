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
[Wikipedia](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)

## 4. Floyd-Warshall Algorithm
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
