#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,temp,sum,rev,counter;
    cin>>t;
    while(t--){
        cin>>n;
        temp=n;
        counter=0;
        while(1){
            rev=0;
            while(temp){
                int rem=temp%10;
                rev=rev*10+rem;
                temp/=10;
            }
            if(n==rev)
                break;
            else{
                temp=rev+n;
                n=temp;
                counter++;
            }
        }
        cout<<counter<<" "<<n<<endl;
    }

    return 0;
}
