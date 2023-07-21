#include<stdio.h>
int increase(int *arr,int num)
{
 int itr;
 for(itr=0;itr<num-1;itr++)
 {
 if(arr[itr]<arr[itr+1])
 return 0;
 }
 return 1;
}
int decrease(int *arr,int num)
{
 int itr;
 for(itr=0;itr<num-1;itr++)
 {
 if(arr[itr]>arr[itr+1])
 return 0;
 }
 return 1;
}
int main()
{
 int arr[100],size;
 int index;
 scanf("%d",&size);
 for(index=0;index<size;index++)
 scanf("%d",&arr[index]);
 if(increase(arr,size)||decrease(arr,size))
 {
 printf("Monotonic");
 }
 else
 printf("Not Monotonic");
}
