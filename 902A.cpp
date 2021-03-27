#include<bits/stdc++.h>
using namespace std;
vector<int>ara[100];
stack<int>s;
int seen[100];
void dfs(int m)
{

    if(seen[m])return;
    cout<<m<<" ";
    seen[m]=1;
    for(int i=0;i<ara[m].size();i++){
        dfs(ara[m][i]);
    }
}
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        ara[x].push_back(y);
        ara[y].push_back(x);
    }
    dfs(m);
}
