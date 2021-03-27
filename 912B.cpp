#include<iostream>
#include<algorithm>
#include<vector>
#define ll unsigned long long
using namespace std;

int main()
{
    ll n,k,ans=1;
    cin>>n>>k;

    while(1){
        ans=ans<<1;
        if(ans>n)
            break;
    }

    cout<<ans-1<<endl;

    return 0;
}

