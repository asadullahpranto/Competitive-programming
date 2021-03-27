#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n%10;

    if(x==0)
        cout<<n<<endl;
    else if(x<=5)
        cout<<n-x<<endl;
    else
        cout<<n+(10-x)<<endl;

    return 0;
}
