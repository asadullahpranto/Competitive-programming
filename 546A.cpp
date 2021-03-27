#include<iostream>
#include<map>
#include<algorithm>
#define ll unsigned long long
using namespace std;

int main()
{
    ll k,n,w,tD;
    cin>>k>>n>>w;

    tD=(w*(w+1)>>1)*k;

    cout<<(tD>n ? tD-n:0)<<endl;

    return 0;
}
