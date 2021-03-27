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
    int a,b,c;
    cin>>a>>b>>c;
    int m=a*b*c;
    int n=(a+b)*c;
    int o=a*(b+c);
    int p=a+b+c;

    cout<<max(m,max(n,max(o,p)))<<endl;

    return 0;
}
