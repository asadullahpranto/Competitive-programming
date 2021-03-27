#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
bool visited[1000];

void DFS(int s)
{
    if(visited[s])
        return;

    char c=s+'A';
    cout<<c<<" ";

    visited[s]=1;

    for(int i=0;i<adj[s].size();i++)
        DFS(adj[s][i]);
}

int main()
{
    int n,e;
    char a,b;
    cin>>n>>e;

    while(e--){
        cin>>a>>b;
        adj[a-'A'].push_back(b-'A');
        adj[b-'A'].push_back(a-'A');
    }

    DFS(0);

    return 0;
}
/*
6 8
6 8
A B
A C
B C
B D
D E
F A
F C
C E

output: A B C F E D
*/
