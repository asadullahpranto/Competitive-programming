///             ASADULLAH PRANTO
///               ID: 2015331528

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,x1,y1,x2,y2,r=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        r+=(x2-x1+1)*(y2-y1+1);
    }
    cout<<r<<endl;

    return 0;
}

