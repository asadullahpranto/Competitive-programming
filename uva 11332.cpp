#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    while(cin>>n && n){
        ll sum=0;
        while(n){
            int rem=n%10;
            sum+=rem;

            n/=10;
            if(n==0 && sum<10){
                n=sum;
                break;
            }
            if(n==0){
                n=sum;
                sum=0;
            }
        }
        cout<<n<<endl;
    }


    return 0;
}
