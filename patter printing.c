#include<stdio.h>

int main()
{
    int i,j,num1;
    scanf("%d",&num1);
for(i=1;i<=num1;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
    printf("\n");

    for(i=1;i<=num1;i++)
    {
        printf("\n");
        for(j=1;j<=num1;j++)
        {
            if(num1-i<j)
            {
              printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
    for(i=1;i<=num1;i++)
    {
        printf("\n");
        for(j=1;j<=num1;j++)
        {
            for(int space=0;space<=num1-i;space++)
            {
                printf(" ");
            }

        }
    }
}
