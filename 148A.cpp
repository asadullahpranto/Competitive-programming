#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;

    for(int i=1;i<=d;i++){
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
            cnt++;
    }
    cout<<d-cnt<<endl;

    return 0;
}
