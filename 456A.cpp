#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<stack>
#include<iomanip>
#define M 1e9+7
#define ll long long
#define ull unsigned long long
using namespace std;

struct Pair{
    int a,b;
};

bool com(Pair x,Pair y){
    return x.a<y.a;
}

int main()
{
    int n,a,b;
    bool ck=false;
    vector<Pair>v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),com);

    for(int i=0;i<n-1;i++){
        if(v[i].a<v[i+1].a && v[i].b>v[i+1].b)
            ck=true;
    }

    if(ck)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;

    return 0;
}
