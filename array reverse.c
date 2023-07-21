#include <stdio.h>

int main() {
    int num,i,j;
    scanf("%d",&num);
    int myArray[num];

    for(i=0;i<num;i++)
    {
    scanf("%d",&myArray[i]);
    }

    if(num==1)
    {
        printf("\n");
        printf("%d",myArray[0]);
    }
    else if(myArray[0]>myArray[1])
    {
        printf("\n");
        printf("%d",myArray[num-1]);
    }
    else if(myArray[num-1]>myArray[num-2])
    {
        printf("\n");
        printf("%d",myArray[num-1]);
    }
    else{
    for(i=0;i<num;i++)
    {
        if(myArray[i]<myArray[i+1]&&myArray[i]<myArray[i-1])
        {
            printf("\n");
            printf("%d",myArray[i]);
        }
    }
    }
    return 0;
}
