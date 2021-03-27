/*Average complexity : O(n log n)
worst complexity : O(n^2)*/
#include<bits/stdc++.h>
using namespace std;
//void swap(int *a, int *b)
//{
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
int partition(int ara[],int low,int high)
{
    int pivot = ara[high];
    int i = (low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(ara[j] <= pivot)
        {
            i++;
            swap(ara[i],ara[j]);
        }
    }
    swap(ara[i+1],ara[high]);
    return (i+1);
}
void quic_sort(int ara[],int low,int high)
{
    if(low<high)
    {
        int pi = partition(ara,low,high);
        quic_sort(ara,low,pi-1);
        quic_sort(ara,pi+1,high);
    }
}
void printArray(int ara[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", ara[i]);
    printf("\n");
}
int main()
{
    int ara[100],i,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    quic_sort(ara, 0, n-1);
    printf("Sorted array: ");
    printArray(ara, n);
    return 0;
}
