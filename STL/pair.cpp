#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    vector<pair<int,string> >v;
    vector<pair<int,string> >::iterator it;

    int n,a;
    cin>>n;
    string b;

    for(int i=0;i<n;i++){
        cin>>a>>b;

        v.push_back(make_pair(a,b));
    }

    for(it=v.begin();it!=v.end();it++)
        cout<<it->first<<" "<<it->second<<endl;

    return 0;
}
