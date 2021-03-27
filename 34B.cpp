#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    int n,mini=1e9,ans=1e9;
    cin>>n;
    int ara[n];
    for(int i=0;i<n;i++){
        cin>>ara[i];
        mini=min(mini,ara[i]);
    }

    for(int i=0;i<n;i++)
        if(ara[i]==mini)
            v.push_back(i);
    for(int i=1;i<v.size();i++)
        ans=min(ans,v[i]-v[i-1]);

    cout<<ans<<endl;

    return 0;
}

