#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,k,a;
    cin>>n>>k;
    int ara[n];
    for(int i=0;i<n;i++)
        cin>>ara[i];

    sort(ara,ara+n);

    int ans=k;
    for(int i=0;i<n;i++){
        if(k%ara[i]==0)
            ans=k/ara[i];
    }

    cout<<ans<<endl;

    return 0;
}

