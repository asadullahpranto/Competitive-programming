#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;
    map<char,int>mp;
    string s;
    cin>>n>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            mp[s[i]]++;
        else if(mp[tolower(s[i])]>0)
            mp[tolower(s[i])]--;
        else
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
