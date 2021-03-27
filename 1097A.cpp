#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int w,h,a,b,c,d;
    cin>>w>>h>>a>>b>>c>>d;

    for(int i=h;i>=0;i--){
        w+=i;
        if(i==b){
            w-=a;
            if(w<0)
                w=0;
        }
        if(i==d){
            w-=c;
            if(w<=0)
                w=0;
        }
    }
    cout<<w<<endl;


    return 0;
}
