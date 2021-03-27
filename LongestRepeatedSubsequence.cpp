#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
using namespace std;

// Longest Repeated Subsequence
int LRS(string s)
{
    int l=s.size();
    int dp[l+1][l+1];

    for(int i=0;i<=l;i++)
        for(int j=0;j<=l;j++)
            dp[i][j]=0;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=l;j++){
            if(s[i-1]==s[j-1] && i!=j)
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[l][l];
}

int main()
{
    string a;
    cin>>a;

    cout<<LRS(a)<<endl;

    return 0;
}
