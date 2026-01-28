class Solution {
public:
void dfs( vector<vector<int>>&adj,vector<int>&visited,int source){
    visited[source]=1;
    for(int neigh:adj[source]){
        if(!visited[neigh]){
            dfs(adj,visited,neigh);
        }
    }
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto e: edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<int>visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(adj,visited,source);
            }
        }
        return visited[destination];
    }
};