#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    string s, ss, suffix;

    cout<<"Enter the first string: ";
    getline(cin, s);

    cout<<"Enter the second string: ";
    getline(cin, ss);

    cout<<"Output: ";

    int x = s.find(ss);

    if(x == 0)
        cout<<"It is substring and Prefix."<<endl;
    else if(x + ss.size() == s.size())
        cout<<"It is substring and suffix."<<endl;
    else if(x != -1)
        cout<<"It is a substring."<<endl;
    else
        cout<<"It is not substring, prefix or suffix."<<endl;

    return 0;
}
