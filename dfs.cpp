#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfs(int node,vector<int>adj[],int vis[],vector<int>&ls){
    vis[node] = 1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
 vector<int> DfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int start = 0;
        vector<int>ls;
        dfs(0,adj,vis,ls);
        return ls;
    }
    
int main(){
 int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    vector<int>ans = DfsOfGraph(V,adj);
    for(auto it:ans){
        cout<<it<<" ";
    }

return 0;
}