# Algorithms
Simple, small sized implementation of select algorithms in C++

## 1. Breadth First Search (BFS)
_This is used for traversing a graph._

### Algorithm
G is the adjacency matrix representing the graph.  
'visited' array marks nodes as visited.

bfs(v):
1. Mark 'v' as visited and print it  
2. For each node in G connected to 'v' and unvisited, mark node as visited and add it to the queue  
3. For each node 't' in the queue call bfs(t)  

<img src="https://upload.wikimedia.org/wikipedia/commons/5/5d/Breadth-First-Search-Algorithm.gif" width="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Breadth-first_search)

## 2. Depth First Search (DFS)
_Used for traversing a graph_
### Algorithm
G is the adjacency matrix representing the graph.  
'visited' array marks nodes as visited.  

dfs(v):
1. Mark 'v' as visited and print it  
2. For each node 't' in G connected to 'v' and unvisited, mark node as visited and call dfs(t)  

<img src="https://upload.wikimedia.org/wikipedia/commons/7/7f/Depth-First-Search.gif" width="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Depth-first_search)

## 3. Dijkstra's Algorithm
_Used to find shortest path from a source to all other nodes_
### Algorithm
G is the adjacency matrix representing the graph (999 represents ∞).  
'v' is the source node from which shortest distance is computed.  
'visited' array marks nodes as visited.  
'dist' holds shortest distances from the source node.

1. Update distance array with distances from the source node (with values from the graph)
2. Mark source node as visited
3. Find nearest unvisited node 'u' from source
4. For every node 'k' in the graph, check if distance from source to 'k' is less than sum of distances from source to 'u' and 'u' to 'k'
5. If not, update distance to the new minimum
6. Repeat from step 3 until all nodes are marked as visited  

<img src="https://upload.wikimedia.org/wikipedia/commons/5/57/Dijkstra_Animation.gif" width="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm)

## 4. Floyd-Warshall Algorithm
_Used to find shortest paths for all pairs of nodes_
### Algorithm
G is the adjacency matrix representing the graph (999 represents ∞).  
'dist' matrix holds the shortest distance values.

1. Initialize dist with G
2. Consider each node 'i' in the graph as an intermediate node
3. For every pair of vertices 'j' and 'k', check if distance from 'j' to 'k' is shorter than sum of distances from 'j' to 'i' and 'i' to 'k'
4. If not, update dist with the minimum value

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2e/Floyd-Warshall_example.svg/500px-Floyd-Warshall_example.svg.png" height="200"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm)

## 5. Kruskal's Algorithm
_Used to find minimum spanning tree_
### Algorithm
G is the adjacency matrix representing the graph (999 represents ∞).  
'parent' is used to keep track of connected nodes and check for loops.  

1. Find the shortest edge in the graph. Call the nodes 'u' and 'v'
2. Check if 'u' and 'v' are connected by a common parent
3. If not, select the edge, update the cost, and set 'u' as parent of 'v'
4. Repeat from step 1 till n-1 edges are found (n is number of nodes in the graph)

<img src="https://upload.wikimedia.org/wikipedia/commons/b/bb/KruskalDemo.gif" width="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Kruskal's_algorithm)

## 6. N-Queen's Problem 
_For a given NxN chess board, find the ways in which N queens can be placed so that no two queens share the same row, column or diagonal_
### Algorithm (Backtracking)
'col' array holds the column numbers(of successive rows) where queen can be placed.  

nq(N, k):
1. For given row 'k', check each column if queen can be placed
2. If yes, update col and call nq(N, k+1)
3. If last row has been reached, display 'col'
5. Repeat step 1 for each row

<img src="https://upload.wikimedia.org/wikipedia/commons/1/1f/Eight-queens-animation.gif" width="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Eight_queens_puzzle)

## 7. Prim's Algorithm
_Used to find minimum spanning tree_
### Algorithm
G is the adjacency matrix representing the graph (999 represents ∞).  
'visited' array marks nodes as visited.  

1. Mark first node as visited
2. Find the nearest unvisited node from any of the visited nodes
3. Mark it as visited
4. Repeat from step 2 till all nodes are visited

<img src="https://upload.wikimedia.org/wikipedia/commons/9/9b/PrimAlgDemo.gif" width="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Prim's_algorithm)

## 8. Subset Sum Problem
_For a given set of integers, check if there exists a subset of it such that the sum of its integers equals a given value M_
### Algorithm
M is the value of the sum  
'val' array holds the given integer set in ascending order, along with a large integer as the last element. This is to avoid checking for end of array  
'selected' marks elements that are to be taken  

sumofsub(sum, k):
1. Mark element k as selected, and check if including it gives M
2. If yes, display selected items
3. Else, if including current _and_ next element can give M, call sumofsub(sum+val[k], k+1)
4. Check if leaving out current element can give M, call sumofsub(sum, k+1)

[Wikipedia](https://en.wikipedia.org/wiki/Subset_sum_problem)

## 9. Travelling Salesman Problem
_For a given a list of cities and the distances between each pair of cities, find the shortest possible route that visits each city exactly once and returns to the origin city_
### Algorithm (Brute Force)
'tour_brute' and 'cost_brute' represent the final tour and cost respectively.  
'v' array holds the route that is currently being tested.  

tsp_brute(cur):
1. If last node has been reached, find cost of current route
2. If this cost is the smallest so far, copy 'v' to 'tour_brute'
3. If not last node, for each of the remaining nodes:  
    a. swap with current node in 'v'  
    b. call tsp_brute(cur+1)  
    c. restore values by swapping back

<img src="https://upload.wikimedia.org/wikipedia/commons/2/2b/Bruteforce.gif" height="250"/>  

[Wikipedia](https://en.wikipedia.org/wiki/Travelling_salesman_problem)
