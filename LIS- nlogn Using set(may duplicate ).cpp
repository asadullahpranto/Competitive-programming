#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ara[n];

    for(int i=0;i<n;i++) cin>>ara[i];

    set<int>st;
    set<int>::iterator it;

    //cout<<*st.lower_bound(ara[0])<<endl;

    for(int i=0;i<n;i++){
        it=st.lower_bound(ara[i]); cout<<"IT "<<*it<<endl;
        if(it!=st.end()) st.erase(it);
        st.insert(ara[i]);
    }
    cout<<st.size()<<endl;
}
