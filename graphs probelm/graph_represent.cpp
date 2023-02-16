# include<bits/stdc++.h>
using namespace std;

int main(){
    // adj matrix
    int n,m;
    cin>>n>>m;
    // adjency list with weights
    int u,v,w;
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<m;i++){
        
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    for(int u=0;u<n;u++){
         cout << "Node " << u << " makes an edge with \n";
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "\tNode " << v << " with edge weight ="
                 << w << "\n";
        }
        cout << "\n";
    }


    return 0;
}