#include<iostream>
#include<algorithm>
#include<cstdio>
#define ll unsigned long long
using namespace std;

int main()
{
    //freopen("output.txt","w",stdout);
    int n,q;
    cin>>n;
    ll line[n];
    for(int i=0;i<n;i++)
        cin>>line[i];

    cin>>q;
    while(q--){
        ll t,ck1=0,ck2=0;
        cin>>t;
        int x=upper_bound(line,line+n,t)-line;

        for(int i=0;i<n;i++){
            if(t>line[i])
                ck1=line[i];
            else
                break;
        }

        if(ck1==0)
            cout<<"X";
        else
            cout<<ck1;

        cout<<" ";

        if(x==n)
            cout<<"X";
        else
            cout<<line[x];

        cout<<endl;


        //cout<<y<<" "<<x<<endl;
    }

    return 0;
}
