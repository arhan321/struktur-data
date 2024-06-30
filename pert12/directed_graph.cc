#include <iostream>
#include <vector>
using namespace std;

void addEdgeDirected(vector<int> adj[], int v, int w) {
    adj[v].push_back(w); // Hanya satu arah
}

void printGraphDirected(vector<int> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << ":\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

int main() {
    int V = 5;
    vector<int> adj[V];

    addEdgeDirected(adj, 0, 1);
    addEdgeDirected(adj, 0, 4);
    addEdgeDirected(adj, 1, 2);
    addEdgeDirected(adj, 1, 3);
    addEdgeDirected(adj, 1, 4);
    addEdgeDirected(adj, 2, 3);
    addEdgeDirected(adj, 3, 4);

    printGraphDirected(adj, V);

    return 0;
}