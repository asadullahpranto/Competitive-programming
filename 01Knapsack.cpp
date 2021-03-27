#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
#define FOR(n) for(int i=1;i<=n;i++)

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int weight[n+1],price[n+1],mat[n+1][c+1];

    FOR(n) cin>>weight[i]>>price[i];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=c;j++){
            if(i==0 || j==0)
                mat[i][j]=0;
            else if(weight[i]>j)
                mat[i][j]=mat[i-1][j];
            else
                mat[i][j]=max(mat[i-1][j],mat[i-1][j-weight[i]]+price[i]);
        }
    }

    for(int i=0; i<=n;i++){
        for(int j=0; j<=c; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }

    cout<<mat[n][c]<<endl;

    return 0;
}
