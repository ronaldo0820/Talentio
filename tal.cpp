#include<stdio.h>
void main()
{
    int k,n,a[100];
    scanf("%d %d",&n,&k);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        for(int in=0;in<n-i;in++)
        {
            if(a[in]>a[in+1])
            {
                int t=a[in];
                a[in]=a[in+1];
                a[in+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=n-1;i>=n-k;i--)
    {
        printf("%d ",a[i]);
    }
    
}
