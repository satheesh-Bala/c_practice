#include<stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    int arr[n];
    int sum=0;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&arr[i]);
        sum=arr[i]+sum;
    }

    int sumi=0;
    for(i=1;i<=n;i++)
    {
        sumi=i+sumi;
    }

    int total=sumi-sum;
    printf("%d\n",total);
}
