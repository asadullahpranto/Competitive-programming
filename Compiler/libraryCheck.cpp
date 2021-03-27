#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

map<string,bool>mp;

void preprocess()
{
    mp["auto"]=1, mp["double"]=1, mp["int"]=1, mp["struct"]=1, mp["break"]=1, mp["else"]=1,
    mp["long"]=1, mp["switch"]=1, mp["case"]=1, mp["enum"]=1, mp["register"]=1, mp["typedef"]=1,
    mp["char"]=1, mp["extern"]=1, mp["return"]=1, mp["union"]=1, mp["const"]=1, mp["float"]=1,
    mp["short"]=1, mp["unsigned"]=1, mp["continue"]=1, mp["for"]=1, mp["signed"]=1, mp["void"]=1,
    mp["default"]=1, mp["goto"]=1, mp["sizeof"]=1, mp["volatile"]=1, mp["do"]=1, mp["if"]=1,
    mp["static"]=1, mp["while"]=1;
}


int main()
{
    preprocess();

    string s;
    cout<<"Enter any string: ";
    cin>>s;

    if(mp[s])
        cout<<"Output: It is a Keyword!"<<endl;
    else
        cout<<"Output: It is not a keyword!"<<endl;

    return 0;
}
