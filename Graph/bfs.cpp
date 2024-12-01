#include <bits/stdc++.h>
#define loop for(int i=0;i<m;i++)
using namespace std;

void bfs(vector<int> adj[], int n, int start) {
    vector<bool> visited(n + 1, false); // To keep track of visited nodes
    queue<int> q; // Queue to store nodes for BFS

    visited[start] = true; // Mark the start node as visited
    q.push(start); // Push the start node into the queue

    while (!q.empty()) {
        int node = q.front(); // Get the front node from the queue
        q.pop(); // Remove the node from the queue

        cout << node << " "; // Print the node (or process it)

        // Iterate over the adjacent nodes
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) { // If neighbor is not visited
                visited[neighbor] = true; // Mark it as visited
                q.push(neighbor); // Push the neighbor into the queue
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    vector<int> adj[n + 1]; // Adjacency list for storing graph
    
    loop {
        int u, v;
        cin >> u >> v;
        
        adj[u].push_back(v); // Add an edge u-v
        adj[v].push_back(u); // Add the edge v-u (since it's undirected)
    }

    // Perform BFS starting from node 1 (you can change the start node)
    cout << "BFS starting from node 1: ";
    bfs(adj, n, 1);
    cout << endl;

    return 0;
}
