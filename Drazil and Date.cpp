/// ASADULLAH PRANTO       ID: 2015331528

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a,b,s,temp;

    cin>>a>>b>>s;

    temp=abs(a)+abs(b);

    if(temp<=s && (temp%2==s%2))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
