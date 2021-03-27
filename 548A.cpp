#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,x,cnt=0;
    cin>>s>>n;

    if(s.size()%n)
        cout<<"NO"<<endl;

    else{
        x=s.size()/n;
        while(s.size()){
            string s2=s.substr(0,x);
            string temp=s2;

            reverse(temp.begin(),temp.end());

            if(temp==s2)
                cnt++;
            s.erase(0,x);
        }

        if(cnt>=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
