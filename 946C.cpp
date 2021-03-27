#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ans,s2="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    if(s.size()<26)
        cout<<-1<<endl;
    else{
        for(int i=0;i<s.size()-1;i++){
            int y=abs(s[i]-s[i+1]);

            if(s[i]==s[i+1]){
                s[i+1]++;
            }
            else if(s[i]>s[i+1])
                s[i+1]=s[i]+y+1;
        }
        cout<<s<<endl;
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s2[x]){
                ans+=s[i];
                x++;
            }
        }
        if(!ans.size())
            cout<<-1<<endl;
        else
            cout<<ans<<endl;
    }

    return 0;
}
