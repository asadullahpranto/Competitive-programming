#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
#define FOR(n) for(int i=0;i<=n;i++)

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int la=a.size(),lb=b.size();
    int mat[la+1][lb+1];

    FOR(la){
        for(int j=0;j<=lb;j++){
            if(i==0)
                mat[i][j]=j;
            else if(j==0)
                mat[i][j]=i;
            else if(a[i-1]==b[j-1])
                mat[i][j]=mat[i-1][j-1];
            else
                mat[i][j]=min(mat[i-1][j-1],min(mat[i-1][j],mat[i][j-1]))+1;
        }
    }

    cout<<mat[la][lb]<<endl;

    return 0;
}
