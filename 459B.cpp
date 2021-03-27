#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ll n,cntX=0,cntY=0;
    cin>>n;
    ll flower[n];
    for(ll i=0;i<n;i++)
        cin>>flower[i];

    sort(flower,flower+n);

    if(flower[0]==flower[n-1])
        cout<<0<<" "<<(n*(n-1)>>1)<<endl;
    else{
        for(ll i=0;i<n;i++){
            if(flower[i]==flower[0])
                cntX++;
            if(flower[i]==flower[n-1])
                cntY++;
        }

        cout<<flower[n-1]-flower[0]<<" "<<cntX*cntY<<endl;
    }

    return 0;
}
