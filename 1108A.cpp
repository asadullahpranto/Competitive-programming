#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a==c)
            cout<<a<<" "<<b<<endl;
        else if(a<=c && d<=b)
            cout<<c<<" "<<d<<endl;
        else if(c<=a && b<=d)
            cout<<a<<" "<<b<<endl;
        else if(c<=a && a<=d && d<=b)
            cout<<a<<" "<<b<<endl;
        else if(b<c || b>c)
            cout<<b<<" "<<c<<endl;

    }

    return 0;
}
