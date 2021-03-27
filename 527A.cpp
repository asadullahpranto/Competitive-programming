#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a,b,cnt=0;

    cin>>a>>b;

    while(a!=0 && b!=0){
        cnt+=a/b;
        ll temp=a%b;
        a=b;
        b=temp;
    }
    cout<<cnt<<endl;

    return 0;
}
