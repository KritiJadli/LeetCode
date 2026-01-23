class Solution {
public:
bool dfsCycle(vector<vector<int>>&adj,vector<int>&visited,int node,vector<int> &pathVisited){
    visited[node]=1;
    pathVisited[node]=1;
    for(int neighbour:adj[node]){
        if(!visited[neighbour]){
           if(dfsCycle(adj,visited,neighbour,pathVisited)){
                return true;
            }

        }
        else if(pathVisited[neighbour]){
            return true;
        }
    }
    pathVisited[node]=0;
    return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>visited(numCourses,0);
        vector<int>pathVisited(numCourses,0);
        for(auto &p:prerequisites){
            adj[p[1]].push_back(p[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
            if(dfsCycle(adj,visited,i,pathVisited)){
                return false;
            }
        }
        
        }
        return true;
    }
};