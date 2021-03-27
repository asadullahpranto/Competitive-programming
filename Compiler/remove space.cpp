#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    string s, ans;
    bool ck = 0;

    cout<<"Enter any string: ";

    getline(cin, s);

    cout<<"Output: ";

    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            ans += ' ';
            while(s[i] == ' ')
                i++;
            if(s[i] != ' ')
                i--;
        }
        else
            ans += s[i];
    }

    if(ans[0] == ' ')
        ans.erase(0,1);

    cout<<ans<<endl;

    return 0;
}
