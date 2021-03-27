#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
#define fori(a,n) for(int i=a;i<n;i++)
//#define forj(a,n) for(int j=a;j<n;j++)
using namespace std;

int n,e,s;
vector<int>adj[1000];
void BFS(int a,int dis)
{
    queue<int>q;
    vector<bool>used(n);
    vector<int>d(n),p(n);

    q.push(a);
    used[a]=true;
    p[a]=-1;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int u:adj[v]){
            if(!used[u]){
                used[u]=true;
                q.push(u);

                d[u]=d[v]+1;
                p[u]=v;
            }
        }
    }
    if(!used[dis])
        cout<<"No Path"<<endl;
    else{
        vector<int>path;
        for(int v=dis; v!=-1;v=p[v])
            path.push_back(v);
        reverse(path.begin(),path.end());
        cout<<"Path: ";
        for(int v:path)
            cout<<v<<" ";
        cout<<endl;
    }
}

int main()
{
    int a,b;
    cin>>n>>e;

    fori(0,e){
        cin>>a>>b;
        //cout<<"test"<<endl;
        adj[a].push_back(b);
        adj[b].push_back(a);
        //cout<<"Test"<<endl;
    }

    BFS(4,2);

    return 0;
}
/*
    7 7
    6 4
    4 5
    4 3
    5 1
    5 2
    2 1
    2 3
*/
