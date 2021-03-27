#include<iostream>
using namespace std;

#define ll unsigned long long

int main()
{
    ll n,cnt=0,x; bool ck=false,ck2=false;
    cin>>n;
    while(n){
        x=n%10;
        if(x==4 || x==7)
            cnt++;
        else
            ck=true;
        n/=10;
    }
    if(cnt==0)
        cout<<"NO"<<endl;
    else if(ck){
        while(cnt){
            x=cnt%10;
            if(x==4 || x==7)
                ;
            else{
                ck2=true;
                break;
            }
            cnt/=10;
        }
        if(ck2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else
        cout<<"YES"<<endl;

    return 0;
}
