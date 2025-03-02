//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs_rec(int cur,vector<vector<int>>& adj, vector<int> &visited,vector<int> &ans)
    {
        ans.push_back(cur);
        visited[cur] = 1;
        for(auto k : adj[cur])
        {
            if(visited[k] == 0){
                dfs_rec(k,adj,visited,ans);
            }
        }
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> visited(n,0);
        vector<int> ans;
        dfs_rec(0,adj,visited,ans);
        return ans;
    }
};




//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends