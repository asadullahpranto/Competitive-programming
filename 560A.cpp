#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int n,a;
    bool ck=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==1)
            ck=true;
    }

    if(ck)
        cout<<-1<<endl;
    else
        cout<<1<<endl;


    return 0;
}
