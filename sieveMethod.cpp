
#include<bits/stdc++.h>
#define ll long long
#define MX 100000000
using namespace std;

bool status[MX];
int prime[MX];
void sive()
{
	int sq=sqrt(MX);
	status[0]=status[1]=1;
	for(int i=4;i<=MX;i+=2)
        status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(!status[i])
		{
			for(int j=i*i;j<=MX;j+=i)
                status[j]=1;
		}
	}
}

int main()
{
    ll n,x=-1;
    cin>>n;
    sive();

    for(int i=0;i<=n;i++){
        if(!status[i])
        prime[++x]=i;
    }
    for(int i=0;i<=x;i++)
        cout<<prime[i]<<endl;

    return 0;
}
