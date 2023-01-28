#include<bits/stdc++.h>
using namepsace std;

int main() {

	// Adjacency matrix
	int n, m;
	cin >> n >> m;
	int adj[n+1][n+1];
	for(int i = 0;i<m;i++) {
		int u, v;
		cin >> u >> v;
		adj[u][v] = 1;
		adj[v][u] = 1;
	}

	// Adjacency list
	int n, m;
	cin >> n >> m;
	vector<int> adj[n+1];
	for(int i = 0;i<m;i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// Adjcacency list with weight edge
	int n, m;
	cin >> n >> m;
	vector<pair<int,int>> adj[n+1];
	for(int i = 0;i<m;i++) {
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v,w});
		adj[v].push_back({u,w});
	}
} 
