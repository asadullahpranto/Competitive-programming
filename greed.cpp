#include<iostream>
#include<algorithm>
using namespace std;

#define ll unsigned long long
int main()
{
    ll n,sum=0;
    cin>>n;
    ll a,b[n];
    for(ll i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    for(ll i=0;i<n;i++)
        cin>>b[i];

    sort(b,b+n);

    ll vol=b[n-1]+b[n-2];

    if(vol>=sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
