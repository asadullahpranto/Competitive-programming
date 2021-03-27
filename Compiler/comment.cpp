#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    string s;
    cout<<"Enter any string: ";

    getline(cin, s);

    cout<<"Output: ";

    if(s[0] == '/'){
        if(s[1] == '/')
            cout<<"It is a comment."<<endl;
        else if(s[1] == '*'){
            if(s[s.size()-2] == '*' and s[s.size()-1] == '/')
                cout<<"It is a comment."<<endl;
        }
        else
            cout<<"It is not a comment."<<endl;
    }
    else
        cout<<"It is not a comment."<<endl;

    return 0;
}
