#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;

    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(9);
    s.insert(5);
    s.insert(7);

    it = s.find(5);
    s.erase(it);

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;


    return 0;
}
