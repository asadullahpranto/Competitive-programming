#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    pq.push(14);
    pq.push(345);
    pq.push(23);
    pq.push(11);

    while( !pq.empty() ){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;


    return 0;
}
