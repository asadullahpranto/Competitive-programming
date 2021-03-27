#include<bits/stdc++.h>
#define MX 1000007
using namespace std;

bool status[MX];
int total=0,prime[MX];
void sive()
{
	int sq=sqrt(MX);
	status[1]=1;
	for(int i=4;i<=MX;i+=2)
        status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(!status[i])
		{
			for(int j=i*i;j<=MX;j+=i)
                status[j]=1;
		}
	}
	for(int i=2;i<=MX;i++){
        if(!status[i])
            prime[total++]=i;
	}
}
int numberOfD(int n)
{
    int sum=1;
    for(int i=0;prime[i]<=sqrt(n);i++){
        if(n%prime[i]==0){
            int count=0;
            while(n%prime[i]==0){
                n/=prime[i];
                count++;
            }
            sum*=(count+1);
        }
    }
    if(n>1)
        sum=sum*2;
    return sum;
}
int main()
{
    int n;
    cin>>n;
    sive();
    cout<<numberOfD(n)<<endl;

    return 0;
}
