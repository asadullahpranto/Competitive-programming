#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
using namespace std;

// Longest Repeated Subsequence
int LPS(string s,int i,int j)
{
    if(i==j) // for single character
        return 1;
    if(s[i]==s[j] && i+1==j) // for two character
        return 2;
    if(s[i]==s[j])
        return LPS(s,i+1,j-1)+2;
    return max(LPS(s,i,j-1),LPS(s,i+1,j));
}

int main()
{
    string a;
    cin>>a;

    cout<<LPS(a,0,a.size()-1)<<endl;

    return 0;
}
