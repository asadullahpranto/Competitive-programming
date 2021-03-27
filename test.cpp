#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct  node
{
    int weight,price;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<node>v;

    int n,capacity,a,b;
    cin>>n>>capacity;

    int dyna[n+1][n+1];

    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                dyna[i][j]=0;
            else if()
        }
    }


    return 0;
}
