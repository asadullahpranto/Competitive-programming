#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++) cin>>ara[i];
    for(int i=0;i<n;i++){
        int cnt=1;
        while(i<n-1 && ara[i]<=ara[i+1]){
            cnt++; //cout<<cnt<<" ";
            i++;
        }
        ans=max(ans,cnt);
        if(cnt==n)
            break;
    }
    cout<<ans<<endl;

    return 0;
}
