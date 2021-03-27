#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=a;j<n;j++)

using namespace std;

int main()
{
    int n,a,i=1,j=0;
    cin>>n;
    vector<int>ara,lis(n,1);

    fori(0,n) cin>>a,ara.push_back(a);
    for(int i=0;i<ara.size();i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    while(i<n){
        while(j<i){
            if(ara[j]<ara[i])
                lis[i]=max(lis[i],lis[j]+1);
            j++;
        }
        if(j==i)
            i++,j=0;
    }

    sort(lis.begin(),lis.end());

    cout<<lis[n-1]<<endl;

    return 0;
}
