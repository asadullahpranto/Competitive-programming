#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int gcd(int a, int b)
{
    return a%b==0 ? b:gcd(b,a%b);
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;


    return 0;
}
