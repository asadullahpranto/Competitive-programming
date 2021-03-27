#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==n-i+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    /// second half
//    for(int i=1;i<=n/2+1;i++)
//    {
//        for(int j=1;j<=n;j++)
//        {
//            if(j==n/2+1)
//                printf("* ");
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
}
