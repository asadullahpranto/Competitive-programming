#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++)
        cin>>ara[i];

    int cnt=0;

    if(ara[0]==1){
        for(int i=0;i<n;i++){
            int x=ara[i+1]-ara[i];
            if(ara[i+2]-ara[i+1]==x){
                cnt++;
                //cout<<ara[i]<<" ";
            }
        }
        if(ara[n-1]-ara[n-2]==1){
            cnt++;
            //cout<<ara[n-2]<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(ara[i]-ara[i-1]==1 && ara[i+1]-ara[i]==1){
                cnt++;
                //cout<<ara[i]<<" ";
            }
        }
        if(ara[n-1]-ara[n-2]==1){
            cnt++;
            //cout<<ara[n-1]<<endl;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
