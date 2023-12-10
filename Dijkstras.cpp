#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

#define V 5

int minDistance(const vector<int>& dist, const vector<bool>& sptSet) {
    int minDist = INT_MAX, minIndex;

    for (int v = 0; v < V; v++) {
        if (!sptSet[v] && dist[v] < minDist) {
            minDist = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void printSolution(const vector<int>& dist) {
    cout << "Shortest distances from the source vertex:\n";
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": " << dist[i] << " units\n";
    }
}

void dijkstra(vector<vector<int>>& graph, int src) {
    vector<int> dist(V, INT_MAX);
    vector<bool> sptSet(V, false);

    dist[src] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        sptSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                pq.push({dist[v], v});
            }
        }
    }

    printSolution(dist);
}

int main() {
    vector<vector<int>> graph = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    int sourceVertex;
    cout << "Enter the source vertex (0 to " << V - 1 << "): ";
    cin >> sourceVertex;

    dijkstra(graph, sourceVertex);

    return 0;
}
