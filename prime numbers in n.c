#include <stdio.h>

int main(){
int n,i,j,count=0,k=0;
scanf("%d",&n);
int arr[n];
for(i=2;i<=n;i++){
        for(j=2;j<=n;j++){
            if(i%j==0){
                count++;
                    if(count>1)
                    {
                        break;
                    }
            }
    }
    if(count==1){
        printf(" %d ",i);
        arr[k]=i;
        k++;
    }
    count=0;
 }
 int sum=0;
 for(i=0;i<k;i++){
    sum=sum+arr[i];
    if(sum==n){
        printf("\n %d",i+1);
        break;
    }
 }
}
