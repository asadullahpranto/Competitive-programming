#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int ara[10000];

int main()
{
    int n,mx=0;
    cin>>n;

    map<int,int>mp;
    map<int,int>::iterator it;

    int x;

    for(int i=0;i<n;i++){
        cin>>x;
        mx=max(mx,x);
        mp[x]++;
    }
    cout<<mx<<" ";
    x=-1;

    for(int i=1;i<=sqrt(mx);i++){
        if(mx%i==0){
            if(i!=mx/i){
                ara[++x]=i;
                ara[++x]=mx/i;
            }
            else
                ara[++x]=i;
        }
    }

    for(int i=0;i<=x;i++){
        if(mp[ara[i]]==1)
            mp[ara[i]]=0;
        else if(mp[ara[i]]==2)
            mp[ara[i]]=1;
    }

    mx=0;
    for(it=mp.begin();it!=mp.end();it++){
        x=it->second;
        if(x!=0)
            mx=max(mx,it->first);
    }
    cout<<mx<<endl;


    return 0;
}

