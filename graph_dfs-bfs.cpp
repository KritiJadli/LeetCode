#include<bits/stdc++.h>
using namespace std;

// void dfs(int node,vector<int>adj[],vector<int> &visited){
//     visited[node]=1;
//     cout<<node<<" ";
//     for(int neighbour:adj[node]){
//         if(!visited[neighbour]){
//             dfs(neighbour,adj,visited);
//         }
//     }
    
// }
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
    //  dfs(0,adj,visited);
    queue<int>que;
    que.push(0);
    visited[0]=1;
    cout<<"bfs traversal"<<endl;
    while(!que.empty()){
        int node=que.front();
        que.pop();
        cout<<node<<" ";
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour]=1;
                que.push(neighbour);
            }
        }
    }
         return 0;
}

































































































































































































































   