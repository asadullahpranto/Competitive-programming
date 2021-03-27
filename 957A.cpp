#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define forn for(int i=0;i<n;i++)
using namespace std;

int main()
{
    bool flag1=false,flag2=false;
    int n;
    string s;
    cin>>n>>s;

    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1] && s[i]!='?')
            flag1=true;
        if(s[i]==s[i+1] &&s[i]=='?')
            flag2=true;
        if(s[i]=='?'){
            if(s[i-1]==s[i+1])
                flag2=true;
        }

    }
    if(s[0]=='?' || s[n-1]=='?')
        flag2=true;

    if(flag1)
        cout<<"NO"<<endl;
    else if(flag2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;



    return 0;
}
