#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int a,b;
};
bool com(Node x,Node y)
{
    return x.b<y.b;
}
int main()
{
    vector<Node>v;
    vector<int>ans;
    int n,k,x,cnt=0,days=0;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back({i,x});
    }

    sort(v.begin(),v.end(),com);

    for(int i=0;i<v.size();i++){
        days+=v[i].b;
        if(days<=k){
            cnt++;
            ans.push_back(v[i].a);
        }
        else
            break;
    }

    cout<<cnt<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}
