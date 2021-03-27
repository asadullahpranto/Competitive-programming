#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n];

    for(int i=0;i<n;i++)
        cin>>ara[i];

    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=0;j<n;j++){
            if(ara[i]<ara[j])
                cnt++;
        }
    cout<<cnt<<" ";
    }
    cout<<endl;

    return 0;
}
