#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    vector<char>v;
    map<char,int>mp;

    cin>>n>>s;
    for(int i=0;i<s.size();i++){
        if(mp[towlower(s[i])]==0)
            v.push_back(s[i]);
    }

    if(v.size()>=26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
