#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int n,m,total=0;
    cin>>n>>m;
    int tv[n];
    for(int i=0;i<n;i++)
        cin>>tv[i];

    sort(tv,tv+n);

    for(int i=0;i<m;i++){
        if(tv[i]<0)
            total+=tv[i];
    }

    cout<<abs(total)<<endl;

    return 0;
}
