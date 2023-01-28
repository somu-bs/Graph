//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
private:
    void dfs(int node, vector<int> adj[], vector<int>& listOfNodes, vector<int>& vis) {
        
        vis[node] = 1;
        listOfNodes.push_back(node);
        for(auto &it : adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, listOfNodes, vis);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        // Code here
        vector<int> listOfNodes;
        vector<int> vis(n, 0);
        dfs(0, adj, listOfNodes, vis);
        return listOfNodes;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
