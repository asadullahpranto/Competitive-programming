#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int cnt=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='1' || s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
            cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}

