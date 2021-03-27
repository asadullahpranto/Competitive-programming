#include<bits/stdc++.h>
using namespace std;

vector<int>v(100);

int fib(int n)
{
    if(n == 0 || n == 1) return 1;
    else if( v[n] == 0)
        v[n] = fib(n-1) + fib(n-2);
    return v[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n-1)<<endl;

    return 0;
}
