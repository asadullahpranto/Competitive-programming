#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int>phonebook;

    phonebook['A']=123; /// assign any value
    phonebook['B']=345;/// assign value

    phonebook.insert(make_pair('C',678)); /// assign value
    cout<<endl;

    return 0;
}
