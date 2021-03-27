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

    int x = count(s.begin(), s.end(), '1');
    int y = count(s.begin(), s.end(), '0');

    cout<<"Output: ";

    if(x&1 and y % 2 == 0)
        cout<<"The string is accepted"<<endl;
    else
        cout<<"The string is not accepted"<<endl;


    return 0;
}
