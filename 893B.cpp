#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    for(int i=1;;i++){
        x=(pow(2,i)-1)-pow(2,k-1);
        if(x>n)
            break;
        else if(n%x==0)
            ;
    }
    cout<<x<<end;


    return 0;
}
