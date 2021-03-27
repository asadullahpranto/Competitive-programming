#include<iostream>
#include<algorithm>
#include<vector>
#define ll unsigned long long
using namespace std;

int main()
{
    ll a,b,x,y,z;
    cin>>a>>b>>x>>y>>z;

    ll aA=(x*2)+y;
    ll bB=(z*3)+y;

    if(aA<a && bB<b)
        cout<<0<<endl;
    else if(aA<a && bB>=b)
        cout<<bB-b<<endl;
    else if(aA>=a && bB<b)
        cout<<aA-a<<endl;
    else
        cout<<(aA-a)+(bB-b)<<endl;

    return 0;
}

