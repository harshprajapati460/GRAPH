#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m;
cin >> n >> m;
vector<int>adj[n+1];
for(int i=0; i<m; i++){
    int u,v;
    cin >> u >> v;
    adj[v].push_back(u);
    adj[u].push_back(v);
}
for(int i=0 ; i<=n; i++){
  for(int j=0; j<adj[i].size() ; j++){
    cout<<adj[i][j]<<" ";
  }
  cout<<endl;
}
return 0;
}