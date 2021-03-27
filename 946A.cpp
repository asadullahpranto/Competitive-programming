#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,pos=0,neg=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a>0)
            pos+=a;
        else
            neg+=a;
    }
    cout<<pos-neg<<endl;

    return 0;
}
