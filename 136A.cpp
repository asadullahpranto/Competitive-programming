#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define fori for(int i=1;i<=n;i++)
#define forj for(int j=1;j<=n;j++)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n+1];
    fori
        cin>>ara[i];
    fori{
        bool ck=false;
        forj{
            if(i==ara[j]){
                ck=true;
                cout<<j<<" ";
                break;
            }
        }
        if(!ck)
            cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
