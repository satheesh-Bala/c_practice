
#include<stdio.h>

int main()
{
    int i,j;

    int a[5];

    for(i=0;i<5;i++)//this loop for first iteration
    {
        scanf("%d",&a[i]);
    }
    int temp=0;
    for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(a[i] > a[j])
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
}

for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(a[i] > a[j])
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
}

printf("Swapped numbers:");
    for (i = 0; i < 10-1; i+=2) {
        swap(&numbers[i], &numbers[i+1]);
        printf(" %d %d", numbers[i], numbers[i+1]);
    }
    printf("\n");
    return 0;
for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
