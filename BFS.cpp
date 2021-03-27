#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
bool visited[1000];

void BFS(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=1;

    char c=s+'A';
    cout<<c<<" ";

    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(int i=0;i<adj[u].size();i++){
            int v=adj[u][i];

            if(visited[v]==0){
                visited[v]=1;

                q.push(v);
                c=v+'A';

                cout<<c<<" ";
            }
        }
    }



}

int main()
{
    int n,e;
    char a,b;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b;
        adj[a-'A'].push_back(b-'A');
        adj[b-'A'].push_back(a-'A');
    }

    BFS(0);


    return 0;
}
/*
6 8
A B
A C
B C
B D
D E
F A
F C
C E

OUTPUT: A B C F D E
*/
