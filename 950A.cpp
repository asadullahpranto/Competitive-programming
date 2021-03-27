#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a,ans;
    cin>>l>>r>>a;

    if(l<r){
        if((l+a)<=r)
           ans=2*(l+a);
        else{
            int x=(l+a-r)/2;
            ans=r*2+(x*2);
        }
    }
    else{
        if((r+a)<=l)
           ans=2*(r+a);
        else{
            int x=(r+a-l)/2;
            ans=l*2+(x*2);
        }
    }

    cout<<ans<<endl;

    return 0;
}
