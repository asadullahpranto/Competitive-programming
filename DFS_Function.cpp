#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
bool visited[1000];

void DFS(int s)
{
    if(visited[s])
        return;
    cout<<s<<" ";
    visited[s]=true;

    for(int i=0;i<adj[s].size();i++)
        DFS(adj[s][i]);
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;

    while(e--){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    DFS(0);

    return 0;
}

/*
5 6
0 1
0 2
1 4
1 3
2 4
3 4
*/
