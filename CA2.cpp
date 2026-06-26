#include <iostream>
#include <vector>

using namespace std;

void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, adj, visited);
        }
    }
}

int main() {
    int vertices = 5;
    vector<vector<int>> adj(vertices);

    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {1, 2};

    vector<bool> visited(vertices, false);

    cout << "DFS from 0: ";
    DFS(0, adj, visited);
    cout << endl;

    return 0;
}
