#include <bits/stdc++.h>
#define MAX 100000000
#define LIM 10000
using namespace std;

int flagArr[MAX>>6];
#define ifComp(x) (flagArr[x>>6]&(1<<((x>>1)&31))) // for checking composite or not
#define isComp(x) (flagArr[x>>6]|=(1<<((x>>1)&31))) // for assigning flagArr value

void BitSeive()
{
    register int i,j,k;
    for(i=3; i<LIM; i+=2)
    {
        if(!ifComp(i))
        {
            for(j=i*i,k=i<<1; j<MAX; j+=k)
                isComp(j);
        }
    }

    printf("2 ");
    for(i=3,j=2; i<MAX; i+=2)
    {
        if(!ifComp(i)){
            if(j%100==1)
                cout<<i<<endl;
            j++;
        }
    }
}
int main()
{
    BitSeive();
    cout<<endl;

    return 0;
}
