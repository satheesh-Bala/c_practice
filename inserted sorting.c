
#include <stdio.h>

int num,i,j,fly;
int arr[100];
int main() {

    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
    scanf("%d",&arr[i]);
    }


    insert(arr,num);


    for(i=0;i<num;i++)
    {
    printf("%d ",arr[i]);
    }
    return 0;
}
void insert(int arr[],int num){
    for(i=1;i<num;i++){
        fly=arr[i];
        j=i-1;
        while(j>=0 && fly<=arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=fly;
    }

}
