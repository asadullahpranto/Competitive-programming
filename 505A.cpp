#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    bool ck=false;

    for(int i=0;i<=s.size();i++){
        s.insert(i,"`");
        for(int j=0;j<26;j++){
            s[i]++;
            //cout<<s<<endl;
            string temp=s;
            reverse(temp.begin(),temp.end());
            if(temp==s){
                cout<<s<<endl;
                ck=true;
                return 0;
            }
        }
        s.erase(i,1);
    }

    if(!ck)
        cout<<"NA"<<endl;

    return 0;
}
