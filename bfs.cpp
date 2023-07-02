#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        vis[0] = 1;
        queue<int>q;z
        q.push(0);
        vector<int>dfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            dfs.push_back(node);
            vis[node] = 1;
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }    
        return dfs;
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
    vector<int>ans = bfsOfGraph(V,adj);
    for(auto it:ans){
        cout<<it<<" ";
    }

return 0;
}