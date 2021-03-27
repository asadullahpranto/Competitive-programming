#include<bits/stdc++.h>
using namespace std;

vector<int>adj[3010];
vector<int>Forbidden[3010][3010];
queue<pair<int,int> >q;
bool mark[3010][3010];
int forCK[3010],p[3010][3010],d[3010][3010];

void bfs()    /// 59E CF
{
    int funk=0;
    while(q.size()){
        funk++;
        int v=q.front().first;
        int u=q.front().second;

        for(int i:Forbidden[v][u])
            forCK[i]=funk;
        for(int i:adj[u]){
            if(mark[u][i]==0 && forCK[i]!=funk){
                mark[u][i]=true;
                d[u][i]=d[v][u]+1;
                p[u][i]=v;
                q.push({u,i});
            }
        }
        q.pop();
    }
}
void show(int u,int v)
{
    if(u==0){
        cout<<u+1<<" "<<v+1<<" ";
        return;
    }
    show(p[u][v],u);
    cout<<v+1<<" ";
}
int main()
{
    int n,m,k,u,v,a,b,c;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[--u].push_back(--v);
        adj[v].push_back(u);
    }
    for(int i=0;i<k;i++){
        cin>>a>>b>>c;
        Forbidden[--a][--b].push_back(--c);
    }

    mark[0][0]=true;
    q.push({0,0});

    bfs();

    int ans=INT_MAX,ras;
    for(int i:adj[n-1]){
        if(mark[i][n-1] && d[i][n-1]<ans)
            ans=d[i][n-1],ras=i;
    }
    if(ans==INT_MAX)
        cout<<-1<<endl;
    else{
        cout<<ans<<endl;
        show(ras,n-1);
    }

    return 0;
}
