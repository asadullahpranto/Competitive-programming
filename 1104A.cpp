#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n<=9)
        cout<<1<<endl<<n<<endl;
    else{
        cout<<n<<endl;
        for(int i=0;i<n;i++)
            cout<<1<<" ";
        cout<<endl;
    }

    return 0;
}
