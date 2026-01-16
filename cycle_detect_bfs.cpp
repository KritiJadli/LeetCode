#include<bits/stdc++.h>
using namespace std;
bool isCycle(int start,vector<int> adj[],vector<int>visited){
    visited[start]=1;
    queue<pair<int,int>>que;
    que.push({start,-1});
    while(!que.empty()){
        int node=que.front().first;
        int parent=que.front().second;
        que.pop();
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour]=1;
                que.push({neighbour,node});
            }
            else if(neighbour!=parent){
                return true;
            }
        }
    }
    return false;


}
int main(){
    int n=5;
    vector<int> adj[n];
     adj[0].push_back(1);
     adj[0].push_back(2);
     adj[1].push_back(0);
     adj[1].push_back(3);
     adj[2].push_back(0);
     adj[2].push_back(3);
     adj[2].push_back(4);
     adj[3].push_back(1);
     adj[4].push_back(2);
     vector<int>visited(n,0);
     if (isCycle(0,adj,visited)){
        cout<<"cycle detected";
     }
     else cout<<"no cycle detected";
     return 0;
}