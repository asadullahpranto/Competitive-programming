#include <bits/stdc++.h>
using namespace std;

stack<int>s;
map<int,int>seen;
vector<int>v[110];

void dfs(int x)
{
    if(seen[x])return;
    seen[x]=1;
    for(int i=0;i<v[x].size();i++)
    {
        int top=v[x][i];
        dfs(top);
    }
    s.push(x);
}

int main()
{
    int n,e,x,y;
    while(1){
        cin>>n>>e;
        if(n==0 && e==0)
            break;
        else{
            seen.clear();
            for(int i=0;i<110;i++)
                v[i].clear();

            for(int i=0;i<e;i++)
            {
                cin>>x>>y;
                v[x].push_back(y);
            }
            for(int i=1;i<=n;i++)
            {
                if(seen[i]==0)
                {
                    dfs(i);
                }
            }
            while(!s.empty())
            {
                cout<<s.top()<<" ";
                s.pop();
            }
        }
    }

    cout<<endl;
}

