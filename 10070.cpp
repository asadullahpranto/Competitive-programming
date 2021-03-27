#include<bits/stdc++.h>
using namespace std;

bool convert(string s,int d)
{
    int c=0;
    for(int i=0;i<s.size();i++)
        c=((s[i]-'0')+c*10)%d;
    if(c==0)
        return false;
    else
        return true;
}
int main()
{
    int cnt=0;
    string s;
    while(cin>>s){
        bool s400=convert(s,400);
        bool s100=convert(s,100);
        bool s4=convert(s,4);
        bool s15=convert(s,15);
        bool s55=convert(s,55);
        if(cnt>0)
            cout<<endl;
        cnt++;
        if(s400==0 || (s4==0 && s100!=0)){
            cout<<"This is leap year."<<endl;
            if(s15==0)
                cout<<"This is huluculu festival year."<<endl;
            if(s55==0)
                cout<<"This is bulukulu festival year."<<endl;
        }
        else{
            if(s15==0)
                cout<<"This is huluculu festival year."<<endl;
            else
                cout<<"This is an ordinary year."<<endl;
        }
    }

    return 0;
}
