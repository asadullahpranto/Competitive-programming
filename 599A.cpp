#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define forn for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ll d1,d2,d3;
    cin>>d1>>d2>>d3;
    ll a=2*(d1+d2);
    ll b=d1+d2+d3;
    ll c=2*(d1+d3);
    ll d=2*(d2+d3);

    cout<<min(a,min(b,min(c,d)))<<endl;

    return 0;
}
