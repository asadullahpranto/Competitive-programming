#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=0;j<n;j++)
using namespace std;

struct node
{
    float w,p,u;
};

bool com(node x,node y)
{
    return x.u>y.u;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    /*
    7 15
    2 3 5 7 1 4 1
    10 5 15 7 6 18 3
    */

    vector<node>v;
    int n,capacity;
    cin>>n>>capacity;

    int w[n],p[n];
    fori(0,n) cin>>w[i];
    fori(0,n){
        cin>>p[i];
        v.push_back({w[i],p[i],(float)p[i]/w[i]});
    }
    sort(v.begin(),v.end(),com);

    int ans=0;
    fori(0,v.size()){
        if(capacity>=v[i].w){
            ans+=v[i].p;
            capacity-=v[i].w;
        }
        else{
            ans+=(v[i].u*capacity);
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}

