#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n,taka;
    cin>>n>>taka; // n= number of coins

    int coins[n],mat[n][taka+1];

    for(int i=0;i<n;i++)
        cin>>coins[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<=taka;j++){
            if(j==0)
                mat[i][j]=1;
            else if(i==0){    // when coins are something like 2,3,7,8,10
                if(j%coins[0]==0)
                    mat[i][j]=1;
                else
                    mat[i][j]=0;
            }
            else if(j<coins[i])
                mat[i][j]=mat[i-1][j];
            else
                mat[i][j]=mat[i-1][j]+mat[i][j-coins[i]];


        }
    }
    cout<<mat[n-1][taka]<<endl;

    return 0;
}
