#include <stdio.h>

int main(){
int n,i,j,min,temp;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
           if(arr[min]>arr[j]){
            min=j;
           }
        }
        if(i!=min){
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;}
}
for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
}
