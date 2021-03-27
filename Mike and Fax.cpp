/// ASADULLAH PRANTO      ID: 2015331528

#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool ck=false;
    string s;
    int n;
    cin>>s>>n;

    if(s.size()%n!=0)
        cout<<"NO"<<endl;
    else{
        int l=s.size();
        int per=l/n;
        while(l){
            string s2=s.substr(0,per);
            string temp=s2;
            //cout<<temp<<endl;
            reverse(temp.begin(),temp.end());

            if(s2!=temp){
                ck=true;
                break;
            }
            s.erase(0,per);
            l=s.size();
        }
        if(ck)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }



    return 0;
}

