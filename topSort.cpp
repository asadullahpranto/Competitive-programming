#include <bits/stdc++.h>
using namespace std;
stack<int>s;
map<int,int>seen;
vector<int>v[1000];
void dfs(int x)
{
    if(seen[x])return; /// jodi already visited hoye thake tahole return kore back a chole jabe.
    seen[x]=1; /// jei node nicchi seta ke seen kore dicchi mane visited kore dicchi .
    for(int i=0;i<v[x].size();i++) /// x node er sathe kara kara connected seta loop er maddhome check korte hoy .
    {
        int top=v[x][i]; /// eta mane x node er sathe ke connected seta .
        dfs(top);
    }
    s.push(x); /// stack a dhukiye dichi . stack a ending time onusare dhukbe.
}
int main()
{
    int n,e,x,y;
    cin>>n>>e; /// n= node, e= edges
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        v[x].push_back(y); /// x er sathe y connected. eta directed graph .
    }
    for(int i=1;i<=n;i++) /// ei code a node 1 theke shuru korte hobe.
    {
        if(seen[i]==0) /// node visited kina check korchi ..
        {
            dfs(i); /// visited na hole dfs chalailam.
        }
    }
    while(!s.empty())
    {
        cout<<s.top()<<" "; /// stack er top a thakbe jar ending time beshi . mane je sobar pore finish hoiche .
        s.pop(); /// top neowar por pop kora lage .
    }

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
