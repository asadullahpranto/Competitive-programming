#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=1;
    cin>>n;
    string s,temp;
    cin>>s;
    temp=s;
    for(int i=1;i<n;i++){
        cin>>s;
        if(temp[1]==s[0])
            cnt++;
        temp=s;
    }
    cout<<cnt<<endl;

    return 0;
}
