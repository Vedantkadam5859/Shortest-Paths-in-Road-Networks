# Shortest-Paths-in-Road-Networks
### Problem:

In a road network represented as a graph, where vertices denote locations and edges represent roads with associated distances, the task is to find the shortest path from a user-specified source location to all other locations. This problem is a classic application of Dijkstra's Algorithm for Shortest Paths.

### Solution:

Dijkstra's Algorithm efficiently finds the shortest paths from a source vertex to all other vertices in a graph. For road networks, it can be applied to minimize travel distances. The algorithm uses a vector-based graph representation and employs a priority queue for optimized vertex selection.

### Implementation:

The algorithm initializes a distance array to track the minimum distances from the source vertex and a set to mark visited vertices. It iteratively selects the vertex with the minimum distance from the priority queue and updates the distances of its neighbors. The process continues until all vertices are visited.

#### Data Structures:

- `vector<vector<int>> graph`: A 2D vector representing the road network, where `graph[u][v]` is the distance between vertices `u` and `v`.

- `vector<int> dist`: An array to store the minimum distances from the source vertex.

- `vector<bool> sptSet`: A set to mark visited vertices.

- `priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq`: A priority queue to efficiently select the vertex with the minimum distance.

#### User Input:

The user is prompted to enter the source vertex from which they want to find the shortest paths. This allows customization based on the user's starting location.

### References:

1. E.W. Dijkstra. "A Note on Two Problems in Connexion with Graphs." Numerische Mathematik, 1959.
   
2. T.H. Cormen, C.E. Leiserson, R.L. Rivest, and C. Stein. "Introduction to Algorithms." MIT Press, 2009.

3. GeeksforGeeks. "Dijkstra’s Shortest Path Algorithm using Priority Queue." [https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/](https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-using-priority_queue-stl/)

### Example Usage:

Consider a road network with vertices representing cities and edges denoting roads with distances between them. The user can input the starting city, and the algorithm will output the shortest distances from that city to all other cities in the network.
