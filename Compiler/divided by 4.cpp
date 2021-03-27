#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    string s;

    cout<<"Enter the string: ";
    getline(cin, s);

    cout<<"Output: ";

    if(s.size() == 1 and s[0] == '0')
        cout<<"string is divisible by 4"<<endl;
    else if(s.size() > 2 and s[s.size()-2] == '0' and s[s.size()-1] == '0')
        cout<<"String is divisible y 4"<<endl;
    else
        cout<<"String is not divisible by 4"<<endl;


    return 0;
}
