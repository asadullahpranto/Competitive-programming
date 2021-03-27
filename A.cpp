#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int cnt=0;
    string s,temp,ans;
    cin>>s;
    //sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++){
        if(s[i]!='2')
            ans+=s[i];
        else{
            ans+=s[i];
            for(i=i+1;i<s.size();i++){
                if(s[i]=='0')
                    temp+='0';
                else if(s[i]=='2')
                    temp+='2';
                else
                    ans+=s[i];
            }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans<<temp<<endl;

    return 0;
}

