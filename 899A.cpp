#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int n,a,cnt1=0,cnt2=0;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==2)
            cnt2++;
        else
            cnt1++;
    }
    if(cnt2==0)
        cout<<cnt1/3<<endl;
    else if(cnt2>=cnt1)
        cout<<min(cnt1,cnt2)<<endl;
    else if(cnt2<cnt1)
        cout<<cnt2+((cnt1-cnt2)/3)<<endl;

    return 0;
}
