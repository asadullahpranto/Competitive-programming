#include<iostream>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    map<string,int>mp;
    int n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(mp[s]==0)
            cout<<"OK"<<endl;
        else
            cout<<s<<mp[s]<<endl;

        mp[s]++;
    }

    return 0;
}
