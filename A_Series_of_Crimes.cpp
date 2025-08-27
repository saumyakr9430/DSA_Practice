#include <bits/stdc++.h>
using namespace std;

vector<int> coolGraph(int g_nodes, vector<int> g_from, vector<int> g_to) {
    vector<vector<int>> adj(g_nodes + 1);
    for (int i = 0; i < g_from.size(); ++i) {
        int u = g_from[i];
        int v = g_to[i];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(g_nodes + 1, false);
    vector<int> B;

    priority_queue<int> pq;

    // Start from the largest node
    for (int i = g_nodes; i >= 1; --i) {
        if (!visited[i]) {
            pq.push(i);
            visited[i] = true;
            while (!pq.empty()) {
                int u = pq.top();
                pq.pop();
                B.push_back(u);

                for (int v : adj[u]) {
                    if (!visited[v]) {
                        pq.push(v);
                        visited[v] = true;
                    }
                }
            }
        }
    }

    return B;
}

int main() {
    // Example usage (can be modified for testing)
    int g_nodes = 3;
    vector<int> g_from = {4,1,2,3,2,1};
    vector<int> g_to = {1,2};
    vector<int> result = coolGraph(g_nodes, g_from, g_to);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}