#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++)
        cin>>ara[i];
    int mat[n][n];

    for(int i=1;i<n;i++)
        mat[i][i]=0;

    for(int l=2;l<n;l++){
        for(int i=1;i<n-l+1;i++){
            int j=l+i-1;
            mat[i][j]=INT_MAX;
            for(int k=i;k<j;k++){
                int q=mat[i][k]+mat[k+1][j]+ara[i-1]*ara[k]*ara[j];
                mat[i][j]=min(mat[i][j],q);
            }
        }
    }
    cout<<mat[1][n-1]<<endl;

    return 0;
}
