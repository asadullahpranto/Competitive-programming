#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,x,y,z,netX=0,netY=0,netZ=0;

    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        netX+=x;
        netY+=y;
        netZ+=z;
    }

    if(netX==0 && netY==0 && netZ==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
