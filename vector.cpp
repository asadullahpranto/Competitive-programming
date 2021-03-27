#include<bits/stdc++.h>
using namespace std;

int main()
{
        ///Vector
    vector<int>v;
    for(int i=0;i<10;i++)
        v.push_back(i);
    cout<<"Showing iterating way: "<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl<<endl;

    v.pop_back(); /// delete last element of the vector
    v.pop_back(); /// delete last element
    cout<<"After deleting: "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
