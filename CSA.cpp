#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=0;j<n;j++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

     int a, b,c;
    cin>>a>>b>>c;

    if(a>b) swap(a,b);
    if(c>=b)
        cout<<c-a<<endl;
    else{
        if(c>=a && c<=b){
            if(c-a<=b-c)
                cout<<2*(c-a)+(b-c)<<endl;
            else
                cout<<2*(b-c)+(c-a)<<endl;
        }
        else if(c<=a)
            cout<<b-c<<endl;
    }

    return 0;
}

