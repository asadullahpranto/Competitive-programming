#include<bits/stdc++.h>
using namespace std;

int ara[100];

void buildHeap(int i,int n)
{
    int left=i*2;
    int right=left+1;
    int largest=i;

    if(left<=n && ara[left]>ara[largest])
        largest=left;
    if(right<=n && ara[right]>ara[largest])
        largest=right;

    swap(ara[largest],ara[i]);

    if(largest!=i)
        buildHeap(largest,n);
}

void heapSort(int n)
{
    for(int i=n/2;i>=1;i--)
        buildHeap(i,n);
    while(n){
        swap(ara[1],ara[n]);
        n--;
        buildHeap(1,n);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>ara[i];

    heapSort(n);

    for(int i=1;i<=n;i++)
        cout<<ara[i]<<" ";
    cout<<endl;

    return 0;
}
