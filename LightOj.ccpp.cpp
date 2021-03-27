#include<bits/stdc++.h>
#define fori(a,b) for(int i=a;i<=b;i++)
using namespace std;

vector<int>adj[1009];
int ara[100],cnt[1009],visit[1009],k,n,m,ans;

void bfs(int strt)
{
    fori(0,n) visit[i]=0;
    queue<int>q;
    visit[strt]=true;
    q.push(strt);
    cnt[strt]++;

    if(cnt[strt]==k) ans++;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(int i=0;i<adj[v].size();i++){
            int u=adj[v][i];
            if(!visit[u]){
                q.push(u);
                visit[u]=true;
                cnt[u]++;

                if(cnt[u]==k) ans++;
            }
        }
    }
}

int main()
{
    int t,u,v;
    cin>>t;

    for(int j=1;j<=t;j++){
        ans=0;
        cin>>k>>n>>m;
        fori(0,k-1) cin>>ara[i];
        fori(0,m-1){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        fori(0,n) cnt[i]=0;
        fori(0,k-1) bfs(ara[i]);
        cout<<"Case "<<j<<": "<<ans<<endl;

        fori(0,n) adj[i].clear();
    }


    return 0;
}
