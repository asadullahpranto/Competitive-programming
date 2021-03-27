#include<bits/stdc++.h>
using namespace std;

int main()
{
    /// list
    int ara[]={1,2,3,4,5};
    list<int>l(ara,ara+5);
    list<int>::iterator it;
    it=l.begin();
    l.insert(it,10); /// insert beginning
    l.insert(it,13);
    l.insert(it,15);

    it=l.end();
    l.insert(it,90);
    l.insert(it,2,99);

    it=find(l.begin(),l.end(),5);
    l.insert(it,5,7);

    //l.unique(); /// remove duplicate from the list
    //l.sort(); /// sort the list
    //l.reverse(); /// reverse the list

    list<int>l2;
    l2.merge(l); /// copy l into l2

    for(it=l2.begin();it!=l2.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;
}
