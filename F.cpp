#include<bits/stdc++.h>
#define MX 1000000
#define ll long long
#define ull unsigned long long
#define pi acos(-1.00)
using namespace std;

int main()
{
    int t;
    long long l, r;

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>l>>r;
        cout<<(r*(r+1)/2) - ((l-1)*(l)/2) - r <<endl;
    }

    return 0;
}
