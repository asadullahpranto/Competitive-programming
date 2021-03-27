#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=0,cnt=0;
    cin>>n;
    bool ara[n];

    for(int i=0;i<n;i++)
        cin>>ara[i];

    for(int i=0;i<n;i++){
        if(!ara[i])
            cnt++;
        int cnt2=0;
        for(int j=i;j<n;j++){
            if(ara[j])
                cnt2++;
        }
        //cout<<cnt<<" cnt cnt2 "<<cnt2<<endl;
        mx=max(mx,cnt+cnt2);
        //cout<<"mx "<<mx<<endl;
    }

    cout<<mx<<endl;

    return 0;
}
