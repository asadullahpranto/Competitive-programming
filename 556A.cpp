#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,one=0,zero=0;
    cin>>n>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='0')
            zero++;
        else
            one++;
    }

    cout<<abs(one-zero)<<endl;

    return 0;
}
