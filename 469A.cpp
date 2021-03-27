#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator it;
    int n,p,q,a;
    cin>>n>>p;
    while(p--){
        cin>>a;
        s.insert(a);
    }
    cin>>q;
    while(q--){
        cin>>a;
        s.insert(a);
    }
    int ck=0;
    for(it=s.begin();it!=s.begin();it++){
        ck++;
        if(*it==ck)
            continue;
        else{
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    if(*s.end()>=n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;
}
