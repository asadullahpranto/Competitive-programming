
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int>adj[100];
int visited[100];

void bfs(int s)
{
    queue<int>q;

    q.push(s);
    visited[s]=1;

    while(!q.empty()){
        int f=q.front();
        cout<<f<<" ";
        q.pop();

        for(int i=0;i<adj[f].size();i++){
            int x=adj[f][i];
            if(visited[x]==0){
                q.push(x);
                visited[x]=1;
            }
        }
    }
}

int main()
{
    int v,e;
    string a,b,s;
    cout<<"Enter Number of vertex: ";
    cin>>v;
    cout<<"Enter Number of edge: ";
    cin>>e;

    for(int i=0;i<e;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout<<"Enter Starting Node: ";
    cin>>s;

    cout<<"BFS: ";
    bfs(s);

    return 0;
}
