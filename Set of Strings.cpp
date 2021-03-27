/// ASADULLAH PRANTO      ID: 2015331528

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>mp;
    vector<string>total;

    int n;
    string s,temp;

    cin>>n>>s;

    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==0){
            if(temp.size()>0)
                total.push_back(temp);
            temp="";
            temp+=s[i];
            mp[s[i]]++;
        }
        else
            temp+=s[i];
    }
    total.push_back(temp);

    if(total.size()<n)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++)
            cout<<total[i]<<endl;
        for(int i=n-1;i<total.size();i++)
            cout<<total[i];
        cout<<endl;
    }

    return 0;
}

