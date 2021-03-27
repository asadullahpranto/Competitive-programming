#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq(5,5);
    dq.resize(7,2);
    for(int i=0;i<10;i++)
        dq.push_front(i); /// add element at the beginning
        dq.push_back(10);  /// add element at the end

    for(int i=0;i<dq.size();i++)
        cout<<dq[i]<<" ";
    cout<<endl;

    dq.pop_front(); /// delete one from the first
    dq.pop_back();  /// delete one from the last
    for(int i=0;i<dq.size();i++)
        cout<<dq.at(i)<<" ";
    cout<<endl;

    return 0;
}
