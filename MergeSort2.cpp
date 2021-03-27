#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
#define fori(a,n) for(int i=a;i<n;i++)
#define forj(a,n) for(int j=0;j<n;j++)
#define sf(a) scanf("%d",&a)
#define sfs(a) scanf("%s",a)
using namespace std;

void Merge(int ara[],int left,int mid,int right)
{
    int Ln=mid-left+1;
    int Rn=right-mid;
    int A[Ln],B[Rn];

    fori(0,Ln) A[i]=ara[left+i];
    fori(0,Rn) B[i]=ara[mid+i+1];

    int i=0,j=0,k=left;
    while(i<Ln && j<Rn){
        if(A[i]<=B[j])
            ara[k++]=A[i++];
        else
            ara[k++]=B[j++];
    }
    while(i<Ln)
        ara[k++]=A[i++];
    while(j<Rn)
        ara[k++]=B[j++];
}

void mergeSort(int ara[],int left,int right)
{
    if(left<right){
        int mid=left+(right-left)/2;
        mergeSort(ara,left,mid);
        mergeSort(ara,mid+1,right);
        Merge(ara,left,mid,right);
    }
}

int main()
{
    int n;
    cin>>n;

    int ara[n];
    fori(0,n) cin>>ara[i];

    mergeSort(ara,0,n-1);

    fori(0,n) cout<<ara[i]<<" ";
    cout<<endl;

    return 0;
}
