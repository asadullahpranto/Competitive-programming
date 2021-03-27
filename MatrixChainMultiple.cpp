#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long

using namespace std;

int chainMultiple(int a[],int i,int j)
{
    int mini=INT_MAX;

    if(i==j)
        return 0;

    for(k=i;k<j;k++){
        int cnt=chainMultiple(a,i,k)+chainMultiple(a,k+1,j)+a[i-1]*a[k]*a[j];
        if(cnt<mini)
            mini=cnt;
    }
    return mini;
}


int main()
{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++)
        cin>>ara[i];
    cout<<"Minimum Number Of Operations: "<<chainMultiple(ara,1,n-1)<<endl;

    return 0;
}
