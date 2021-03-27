#include<bits/stdc++.h>
#define MX 1000000
#define ll long long
#define ull unsigned long long
using namespace std;


int main()
{
    int n,x,a;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>x;
        int mx=0;
        for(int j=0;j<x;j++){
            cin>>a;
            mx=max(mx,a);
        }
        cout<<"Case "<<i<<": "<<mx<<endl;
    }


    return 0;
}
