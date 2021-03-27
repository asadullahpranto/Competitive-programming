#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    multiset<ll>ms;
    //multiset<ll>::iterator it;
    ll n;
    cin>>n;

    ll ice[n],tem,sum=0;

    for(int i=0;i<n;i++) cin>>ice[i];
    for(int i=0;i<n;i++){
        ll ans=0;
        cin>>tem;
//        cout<<"item: "<<tem<<endl;
        ms.insert(ice[i]+sum);
//        cout<<"set: ";
//        for(it=ms.begin();it!=ms.end();it++)
//            cout<<*it<<" ";
//        cout<<endl;

        while(!ms.empty() && sum+tem>=*ms.begin()){
            ans+=*ms.begin()-sum;
            //cout<<"set "<<*ms.begin()<<endl;
            ms.erase(ms.begin());
        }
        ans+=ms.size()*tem;
        sum+=tem;
        cout<<ans<<" ";
    }
    cout<<endl;


    return 0;
}
