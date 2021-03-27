#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MX 1000007
using namespace std;

int binarySearch(int ara[],int left, int right,int x)
{
    if(left<=right){
        int mid=left+(right-left)/2;

        if(ara[mid]==x)
            return mid;

        if(x>ara[mid]) /// x er man mid value theke boro
            return binarySearch(ara,mid+1,right,x);

        return binarySearch(ara,left,right-1,x);
    }
    return -1;
}
int main()
{
    int n,x;
    cout<<"Enter the size of array: ";
    cin>>n;
    int ara[n];

    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>ara[i];

    sort(ara,ara+n); /// sorting is must

    cout<<"Value wanna search: ";
    cin>>x;

    int ans=binarySearch(ara,0,n-1,x);

    if(ans!=-1)
        cout<<"Element found at index: "<<ans<<endl;
    else
        cout<<"Opps!! Element not found!"<<endl;

    return 0;
}
