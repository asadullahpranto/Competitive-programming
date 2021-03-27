#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define fori for(int i=1;i<=n;i++)
#define forj for(int j=1;j<=n;j++)
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int ans=min(n,m);

    if(ans%2)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;

    return 0;
}
