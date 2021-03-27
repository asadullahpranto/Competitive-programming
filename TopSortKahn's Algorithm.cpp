#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100];
int n,indegree[1000];

void kahnsAlgo()
{
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(!indegree[i])
            q.push(i);
    }
    while(!q.empty()){
        int x=q.front();
        cout<<x<<" ";
        q.pop();

        for(int i=0;i<adj[x].size();i++){
            int v=adj[x][i];
            if(v){
                indegree[v]--;
                if(!indegree[v])
                    q.push(v);
            }
        }
    }
    cout<<endl;
}

int main()
{
    int e,a,b;
    cin>>n>>e;
    while(e--){  // e means edge
        cin>>a>>b;
        adj[a].push_back(b);
        indegree[b]++;  // in degree of vertex
    }

    kahnsAlgo();

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
