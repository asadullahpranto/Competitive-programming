#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=0;j<n;j++)
using namespace std;

struct node
{
    int x,y;
};
int main()
{
    vector<node>trace;
    int n,v,total=0;
    cin>>n>>v;
    int coins[n],no_co[n];
    for(int i=0;i<n;i++)
        cin>>coins[i];
    sort(coins,coins+n,greater<int>());

    for(int i=0;i<n;i++){
        if(v>=coins[i]){
            int a=v/coins[i];
            total+=a;
            v%=coins[i];
            trace.push_back({coins[i],a});
        }
    }
    cout<<total<<endl;

    for(int i=0;i<trace.size();i++)
        cout<<trace[i].x<<"---"<<trace[i].y<<endl;
    cout<<endl;

    return 0;
}
