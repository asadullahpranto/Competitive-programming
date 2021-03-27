#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

struct Pair{
    ll a,b;
};

bool com(Pair x,Pair y){
    if(x.a==y.a)
        return x.b<y.b;
    return x.a<y.a;
}

int main()
{
    vector<Pair>exm;
    ll n,a,b;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        exm.push_back({a,b});
    }

    sort(exm.begin(),exm.end(),com);

    ll day=exm[0].b;

    for(ll i=1;i<exm.size();i++){
        if(day<=exm[i].b)
            day=exm[i].b;
        else
            day=exm[i].a;
    }

    cout<<day<<endl;

    return 0;
}
