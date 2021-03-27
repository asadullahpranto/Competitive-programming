#include<bits/stdc++.h>
#define MX INT_MAX
#define ll long long
#define ull unsigned long long
using namespace std;

int primeck[21000];

void preprocess()
{
    int i,j;

    for(i=2;i<=20000;i++)
        primeck[i]=1;

    for(i=2;i<=20000;i++){
        if(primeck[i]==1){
            for(j=2; i*j<=20000;j++)
                primeck[i*j]=0;
        }
    }
}

int main()
{
    preprocess();
    int i,cnt=0;

    for(int i=2;i<20000;i++){
        if(primeck[i]==1){
            cnt++;
            cout<<i<<" is the "<<cnt<<"th prime"<<endl;
        }
    }


    return 0;
}
