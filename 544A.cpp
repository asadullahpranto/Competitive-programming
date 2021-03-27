#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mp;
    vector<string>v;
    int n;
    string s,temp="";

    cin>>n>>s;

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==0 && temp.size()>0){
            v.push_back(temp);
            temp="";
        }
        temp+=s[i];
        mp[s[i]]++;
    }
    v.push_back(temp);

    if(v.size()==n){
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    }

    else if(v.size()>n){
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++)
            cout<<v[i]<<endl;
        for(int i=n-1;i<v.size();i++)
            cout<<v[i];
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
