#include <stdio.h>

int main() {
    int num,i,limit;
    scanf("%d %d",&num,&limit);
    int myArray[num];
    for(i=0;i<num;i++)
    {
    scanf("%d",&myArray[i]);
    }
    int temp;
    for(i=0;i<num/2;i++)
    {
        temp = myArray[i];
        myArray[i] = myArray[num-1-i];
        myArray[num-1-i] = temp;
    }
    printf("\n");
    int result;
    for (int i = 0; i < num; i++) {
    result = result * 10 + myArray[i];
    }
    for(i=0;i<num;i++)
    {
    printf("%d",myArray[i]);
    }
    printf("\n %d",result+limit);
    return 0;
}


