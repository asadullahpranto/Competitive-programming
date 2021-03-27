#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int i,n,a,b;
    cin>>n>>a>>b;

    bool ck=false;
    for(i=0;a*i<=n;i++){
        if((n-(a*i))%b==0){
            ck=true;
            break;
        }
    }
    if(ck){
        cout<<"YES"<<endl;
        cout<<i<<" "<<(n-i*a)/b<<endl;
    }
    else
        cout<<"NO"<<endl;


    return 0;
}
