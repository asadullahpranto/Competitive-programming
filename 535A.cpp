#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string one[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string teen[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string ten_th[]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    cin>>n;

    if(n<10){
        cout<<one[n]<<endl;
    }
    else{
        if(n%10==0)
            cout<<ten_th[n/10-1]<<endl;
        else if(n<20)
            cout<<teen[n-10-1]<<endl;
        else
            cout<<ten_th[n/10-1]<<"-"<<one[n%10]<<endl;
    }

    return 0;
}
