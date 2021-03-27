#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ara[m];

    for(int i=0;i<m;i++)
        cin>>ara[i];

    sort(ara,ara+m);

    int ans=ara[m-1]-ara[0];

    for(int i=0;i<=m-n;i++){
        //cout<<ara[i+n-1]<<" "<<ara[i]<<" "<<ara[i+n-1]-ara[i]<<endl;
        if(ara[i+n-1]-ara[i]<ans)
            ans=ara[i+n-1]-ara[i];
    }

    cout<<ans<<endl;

    return 0;
}
