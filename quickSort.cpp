#include<bits/stdc++.h>
#define MX 1000007
#define ll long long
#define ull unsigned long long
#define inf INT_MAX
using namespace std;

int divide(int l,int h,int a[])
{
    int pivot=a[h];
    int i=l;
    for(int j=l;j<h;j++){
        if(a[j]<=pivot){
            swap(a[i],a[j]);
            i++;
        }
    }
    swap(a[i],a[h]);

    return i;
}

void quickSort(int l,int h,int a[])
{
    if(l<h){
        int j=divide(l,h,a);
        quickSort(l,j-1,a);
        quickSort(j+1,h,a);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int ara[n+1];
    ara[n]=inf;
    for(int i=0;i<n;i++)
        cin>>ara[i];

    quickSort(0,n-1,ara);

    for(int i=0;i<n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;


    return 0;
}

