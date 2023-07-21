
#include<stdio.h>

int main()
{
    int i,j;

    int mat1[2][2];
    for(i=1;i<=2;i++)
{
    for(j=1;j<=2;j++)
    {
        scanf("%d",&mat1[i][j]);
    }
}

int mat2[2][2];
    for(i=1;i<=2;i++)
{
    for(j=1;j<=2;j++)
    {
        scanf("%d",&mat2[i][j]);
    }
}

int mat3[2][2];
    for(i=1;i<=2;i++)
{
    for(j=1;j<=2;j++)
    {
        mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
}

for(i=1;i<=2;i++)
{
    printf(" \n ");
    for(j=1;j<=2;j++)
    {
        printf(" %d ",mat3[i][j]);
    }
}
}
