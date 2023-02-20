# include<bits/stdc++.h>
using namespace std;

vector<int>bfs_traversal(int v, vector<int>adj[]){
   int visited[v]={0};
   visited[0]=1;
   vector<int>bfs;
   queue<int>que;
   que.push(0);
   while(!que.empty()){
    int node = que.front();
    bfs.push_back(node);
    que.pop();

    for(auto it: adj[node]){
     
       if(visited[it]==0){
        visited[it]=1;
         que.push(it);
       }

    }
   }
   return bfs;
}

int main(){
    cout<<"Enter the no of nodes and edges : "<<endl;
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    cout<<"Enter the Edges"<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  vector<int>ans = bfs_traversal(n,adj);
  cout<<"bfs traversal of the array is : ";
  for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}