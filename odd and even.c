#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
{
    if(a[i]%2!=0){
    b[count]=a[i];
    count++;
    }
}
for(i=0;i<n;i++)
{
    if(a[i]%2==0){
    b[count]=a[i];
    count++;
    }
}

for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
