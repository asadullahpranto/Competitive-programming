#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a,b;
    while(cin>>a>>b && a && b){
        int carry=0,cnt=0;
        while(a||b){
            int digitA=a%10;
            int digitB=b%10;

            int sum=digitA+digitB+carry;
            carry=sum/10;

            if(sum>9)
                cnt++;

            a/=10;
            b/=10;

        }
        if(cnt==0)
            cout<<"No carry operations."<<endl;
        else
            cout<<cnt<<" carry operations."<<endl;
    }

    return 0;
}
