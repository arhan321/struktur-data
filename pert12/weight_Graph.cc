#include <iostream>
#include <vector>
#include <tuple> // Untuk menggunakan std::tuple
using namespace std;

// Fungsi untuk menambah sisi pada weighted graph
void addEdgeWeighted(vector<tuple<int, int>> adj[], int v, int w, int weight) {
    adj[v].emplace_back(w, weight);
    adj[w].emplace_back(v, weight); // Karena graph tak berarah berbobot
}

// Fungsi untuk mencetak weighted graph
void printGraphWeighted(vector<tuple<int, int>> adj[], int V) {
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << ":\n head ";
        for (auto x : adj[v]) {
            cout << "-> (" << get<0>(x) << ", " << get<1>(x) << ")";
        }
        cout << endl;
    }
}

int main() {
    int V = 5;
    vector<tuple<int, int>> adj[V]; // Daftar adjacency dengan bobot

    // Menambahkan sisi dengan bobot
    addEdgeWeighted(adj, 0, 1, 10);
    addEdgeWeighted(adj, 0, 4, 20);
    addEdgeWeighted(adj, 1, 2, 30);
    addEdgeWeighted(adj, 1, 3, 40);
    addEdgeWeighted(adj, 1, 4, 50);
    addEdgeWeighted(adj, 2, 3, 60);
    addEdgeWeighted(adj, 3, 4, 70);

    // Mencetak weighted graph
    printGraphWeighted(adj, V);

    return 0;
}