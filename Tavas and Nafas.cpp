/// ASADULLAH PRANTO   ID: 2015331528

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string one[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string ten[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string more[]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    //cin>>n;
    while(cin>>n){
    if(n<10){
        cout<<one[n]<<endl;
    }
    else{
        if(n%10==0)
            cout<<more[n/10-1]<<endl;
        else if(n>10 && n<20)
            cout<<ten[n-10-1]<<endl;
        else
            cout<<more[n/10-1]<<"-"<<one[n%10]<<endl;
    }
    }

    return 0;
}
