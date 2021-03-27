#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[]={1,2,3,4,5};

    //set<int>s(ara,ara+5);
    //set<int>::iterator it;

    multiset<int,greater<int> >ms(ara,ara+5); // desending order
    multiset<int,greater<int> >::iterator itm;

    //it=s.begin();
    //s.insert(6);
    //s.insert(6);
    //s.erase(6);
    ms.insert(1);
    ms.insert(3);
    ms.insert(4);
    cout<<ms.count(4)<<endl; /// total number of 4
    itm=find(ms.begin(),ms.end(),4);
    cout<<*itm<<endl;
    ms.erase(itm); /// deleting first 4
    //ms.erase(4);

    //ms.clear();

    for(itm=ms.begin();itm!=ms.end();itm++)
        cout<<*itm<<" ";
    cout<<endl;

    return 0;
}
