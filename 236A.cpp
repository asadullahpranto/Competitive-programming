#include<iostream>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    map<char,int>mp;
    string s; int cnt=0;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(mp[s[i]]==0){
            cnt++;
            mp[s[i]]++;
        }
    }

    cout<<(cnt%2==1 ? "IGNORE HIM!":"CHAT WITH HER!")<<endl;


    return 0;
}
