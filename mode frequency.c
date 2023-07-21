#include<stdio.h>
int main()
{
    int m,n,count=0,temp=0,max,a[100],i,j;
    m=n/2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=1;
        for(j=i+1;i<n;j++)
        {
            if(a[i]==a[i])
            {
                temp+=1;
                if(count<temp)
                {
                    count=temp;
                    max=a[i];
                }
            }
        }
    }
    if(count>m)
    {
        printf("%d",max);
    }
    return 0;
}
