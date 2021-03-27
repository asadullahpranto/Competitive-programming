#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vf vector<float>
#define forn for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int cnt=0,sum=0,A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            sum+=A[i];
            //comu[i]=sum;
        }
        for(int i=0;i<n;i++){
            if((A[i]+k)>(sum-A[i]))
                cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
