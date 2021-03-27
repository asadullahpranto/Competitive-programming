#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;

    s.insert(5);
    s.insert(7);
    s.insert(3);

    it=s.find(0);
    cout<<it<<endl;
}
