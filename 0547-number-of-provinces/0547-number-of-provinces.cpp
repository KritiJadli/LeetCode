class Solution {
public:
void dfs(vector<vector<int>>& isConnected,vector<int>&visited,int node){
    visited[node]=1;
    for(int neighbour=0;neighbour<isConnected.size();neighbour++){
        if(!visited[neighbour] && isConnected[node][neighbour]==1){
            dfs(isConnected,visited,neighbour);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>visited(isConnected.size(),0);
        int prov=0;
        for(int i=0;i<isConnected.size();i++){
            if(!visited[i]){
                prov++;
                dfs(isConnected,visited,i);
            }
        }
        return prov;
    }
};