#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=a;j<n;j++)

using namespace std;

int main()
{
    int n,e,a,b;
    while(cin>>n && n!=0){
        cin>>e;
        vector<int>adj[12345];
        vector<int> side(n, -1);
        bool flag = true;
        for(int i=0;i<e;i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(side[i]==-1){
                side[i]=0;
                q.push(i);
                while(!q.empty()){
                    int v=q.front();
                    q.pop();
                    for(int j=0;j<adj[v].size();j++){
                        int u=adj[v][j];
                        if(side[u]==-1){
                            side[u]=side[v]^1;
                            q.push(u);
                        }
                        else
                            flag &= side[u]!=side[v];
                    }
                }
            }
        }
        cout<<(flag? "BICOLORABLE.":"NOT BICOLORABLE.")<<endl;
    }

    return 0;
}
