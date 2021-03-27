#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100],rev[100];
int visited[1000];

stack<int>stk;

void DFS(int s)
{
    if(visited[s])
        return;
    visited[s]=1;
    for(int i=0;i<adj[s].size();i++)
        DFS(adj[s][i]);
    stk.push(s);
}

void DFS2(int s)
{
    if(visited[s]==2){
        cout<<endl;
        return;
    }
    cout<<s<<" ";
    visited[s]=2;
    for(int i=0;i<rev[s].size();i++)
        DFS2(rev[s][i]);
}

int main()
{
    int n,e,a,b;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        rev[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        if(!visited[i])
            DFS(i);
    }

    while(!stk.empty()){
        int x=stk.top();
        stk.pop();
        DFS2(x);
    }
    cout<<endl;

    return 0;
}
/*
input
8 7
1 2
2 5
1 6
2 7
2 4
1 3
5 8

output: 1 3 6 2 4 7 5 8
*/
