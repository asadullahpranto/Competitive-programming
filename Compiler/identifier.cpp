#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    string s;
    int cnt = 0;

    cout<<"Enter the string: ";
    getline(cin, s);

    cout<<"Output: ";

    if((tolower(s[0]) >= 'a' and tolower(s[0]) <= 'z') or s[0] == '_'){
        cnt++;
        for(int i=1; i<s.size(); i++){
            if((tolower(s[i]) >= 'a' and tolower(s[i]) <= 'z')
               or s[i] == '_' or (s[i] >= '0' and s[i] <= '9'))
                cnt++;
        }
    }

    if(cnt == s.size())
        cout<<"It is valid Identifier"<<endl;
    else
        cout<<"It is not valid identifier"<<endl;


    return 0;
}
