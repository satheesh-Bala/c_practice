
#include<stdio.h>

int main()
{
    int i,j,num1,num2;
    scanf("%d",&num1);
    int arr1[num1];

    for(i=0;i<num1;i++)//this loop for first iteration
    {
        scanf("%d",&arr1[i]);
    }
    int temp=0;
    for(i=0;i<num1;i++)
{
        if(arr1[i]==arr1[i+1])
        {
            arr1[i]=0;
        }
}
for(i=0;i<num1;i++)
    {
        if(arr1[i]!=0)
        {
        printf("%d ",arr1[i]);
        }
    }
}
