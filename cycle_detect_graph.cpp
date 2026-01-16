#include<bits/stdc++.h>
using namespace std;
bool dfsCycle(int node,int parent, vector<int> adj[],vector<int>&visited){
    visited[node]=1;
    for(int neighbour: adj[node]){
        if(!visited[neighbour]){
            if(dfsCycle(neighbour,node,adj,visited)){
                return true;
            }
        }
        else if(neighbour!=parent){
            return true;
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
     if (dfsCycle(0,-1,adj,visited)){
        cout<<"cycle detected \n";
     }
     else cout<<"cycle not detected";
     return 0;
    }