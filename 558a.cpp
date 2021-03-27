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

struct Node
{
    int a,b;
};
bool com1(Node x,Node y){
    return x.a<y.a;
}
bool com2(Node x,Node y){
    return x.a>y.a;
}

int main()
{
    int n,a,b;
    ll sPos=0,sNeg=0;
    vector<Node>pos,neg;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>0){
            pos.push_back({a,b});
            sPos+=b;
        }
        else{
            neg.push_back({a,b});
            sNeg+=b;
        }
    }
    sort(pos.begin(),pos.end(),com1);
    sort(neg.begin(),neg.end(),com2);

    if(pos.size()==neg.size())
        cout<<sPos+sNeg<<endl;
    else if(pos.size()>neg.size()){
        sPos=0;
        for(int i=0;i<=neg.size();i++)
            sPos+=pos[i].b;
        cout<<sPos+sNeg<<endl;
    }
    else{
        sNeg=0;
        for(int i=0;i<=pos.size();i++)
            sNeg+=neg[i].b;
        cout<<sPos+sNeg<<endl;
    }

    return 0;
}
