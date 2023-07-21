#include<stdio.h>

int main()
{
    int i,j,num1,num2;
    scanf("%d %d",&num1,&num2);
    int arr1[num1],arr2[num2];

    for(i=0;i<num1;i++)//this loop for first iteration
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    //arr1[num1+num2];
    j=0;
    for(i=num1;i<num1+num2;i++)
    {
        arr1[i]=arr2[j];
        j++;
    }
    int temp=0;
    for(i=0;i<num1+num2;i++)
{
    for(j=i+1;j<num1+num2;j++)
    {
        if(arr1[i] > arr1[j])
        {
            temp = arr1[j];
            arr1[j] = arr1[i];
            arr1[i] = temp;
        }
        if(arr1[i]==arr1[j])
        {
            arr1[j]=0;
        }
    }
}
for(i=0;i<num1+num2;i++)
    {
        if(arr1[i]!=0)
        {
        printf("%d",arr1[i]);
        }
    }
}
