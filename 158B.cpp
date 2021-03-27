#include<iostream>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int n,m,one=0,two=0,three=0,total=0;
    cin>>n;
    while(n--){
        cin>>m;
        if(m==1)
            one++;
        else if(m==2)
            two++;
        else if(m==3)
            three++;
        else
            total++;
    }

    total+=three;
    one-=three;

    if(two&1){
        total+=two/2+1;
        one-=2;
    }
    else
        total+=two/2;

    if(one<0)
        one=0;

    if(one%4==0)
        total+=one/4;
    else
        total+=one/4+1;

    cout<<total<<endl;

    return 0;
}
