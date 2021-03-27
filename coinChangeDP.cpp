#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int n,taka;
    cin>>n>>taka;

    int coins[n],mat[taka+1];

    for(int i=0;i<n;i++)
        cin>>coins[i];

    for(int i=0;i<=taka;i++)
        mat[i]=0;
    mat[0]=1;

    for(auto c:coins){  // auto: supported compiler version gcc11 or above
        for(int i=c;i<=taka;i++)
            mat[i]+=mat[i-c];
    }

    cout<<mat[taka]<<endl;

    return 0;
}
