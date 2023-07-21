#include <stdio.h>

int main() {
    int num,i;
    scanf("%d",&num);
    int myArray[num];
    int sumi=0;
    for(i=0;i<num;i++)
    {
        sumi=i+sumi;
    }
    for(i=0;i<num-1;i++)
    {
    scanf("%d",&myArray[i]);
    }
    int sum;
    for(i=0;i<num-1;i++)
    {
        sum=myArray[i]+sum;
    }
    printf("\n");
    int total=sumi-sum;
    printf("%d",total);
    return 0;
}
