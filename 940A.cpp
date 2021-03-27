#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    int n,d;
    cin>>n>>d;
    int ara[n];

    for(int i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);

    for(int i=0;i<n;i++){
        int mx=1000;
        for(int j=0;j<n;j++)
            mx=min(mx,abs(ara[j]-ara[i]));
        if(mx>=d)
            v.push_back(mx);
        cout<<mx<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    return 0;
}

