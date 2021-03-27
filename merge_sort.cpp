#include<bits/stdc++.h>
#define INF 2140000000
using namespace std;

void merge(int ara[],int left,int mid,int right)
{
    int i,k,j;
    int n1 = mid - left + 1;
    int n2 = right -mid;
    int left_ara[n1],right_ara[n2];
    for(i=0;i<n1;i++)
    {
        left_ara[i] = ara[left+i];
    }
    for(i=0;i<n2;i++)
    {
        right_ara[i] = ara[mid+i+1];
    }
    left_ara[n1]=right_ara[n2]=INF;
    i=j=0;
    for(k=left;k<=right;k++)
    {
        if(left_ara[i]<right_ara[j])
        {
            ara[k] = left_ara[i];
            i++;
        }
        else
        {
            ara[k] = right_ara[j];
            j++;
        }
    }
}
void merge_sort(int ara[],int left,int right)
{
    if(left<right)
    {
        int mid = (left+right)/2;
        merge_sort(ara,left,mid);
        merge_sort(ara,mid+1,right);
        merge(ara,left,mid,right);
    }
}
int main()
{
    int ara[100],size,i;
    cin>>size;
    for(i=0;i<size;i++)
        cin>>ara[i];
    merge_sort(ara,0,size-1);
    for(i=0;i<size;i++)
        cout<<ara[i]<<" ";

    return 0;
}
