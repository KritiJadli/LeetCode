#include<bits/stdc++.h>
using namespace std;
bool dfsCycle(vector<vector<int>> adj,vector<int>visited,vector<int>pathVisited,int node){
    visited[node]=1;
    pathVisited[node]=1;
    for(int neighbour:adj[node]){
        if(!visited[neighbour]){
            if(dfsCycle(adj,visited,pathVisited,neighbour)){
                return true;
            }
        }
        else if(pathVisited[neighbour]) return true;
    }
    return false;
}
int main(){
    int n = 4;
    vector<vector<int>> adj(n);
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1);
    vector<int>visited(adj.size(),0);
    vector<int>pathVisited(adj.size(),0);
    for(int i=0;i<adj.size();i++){
        if(!visited[i]){
            if(dfsCycle(adj,visited,pathVisited,i)){
                cout<<"cycle detected";
                return 0;
            }

        }
    }
    cout<<"cycle not detected";
    return 0;
}