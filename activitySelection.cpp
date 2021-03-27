#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=0;j<n;j++)
using namespace std;

struct Node
{
    int start,finish;
};

bool com(Node x,Node y)
{
    return x.finish<y.finish;
}

int main()
{
    vector<Node>v;

    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),com);

    cout<<v[0].start<<"---"<<v[0].finish<<endl;

    int x=v[0].finish;
    int cnt=1;
    for(int i=1;i<v.size();i++){
        if(v[i].start>=x){
            cnt++;
            cout<<v[i].start<<"---"<<v[i].finish<<endl;
            x=v[i].finish;
        }
    }

    cout<<"Total: "<<cnt<<endl;

    return 0;
}
