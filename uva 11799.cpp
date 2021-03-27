#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,speed;
    cin>>t;
    for(int i=1;i<=t;i++){
        int ans=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>speed;
            ans=max(ans,speed);
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}
