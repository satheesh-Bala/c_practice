#include <stdio.h>

int main() {
    int num,i;
    scanf("%d",&num);
    int myArray[num];

    for(i=0;i<num;i++)
    {
    scanf("%d",&myArray[i]);
    }
    int temp;
    for(i=1;i<num/2;i++)
    {
        temp = myArray[i-1];
        myArray[i-1] = myArray[num-1-i];
        myArray[num-1-i] = temp;
    }
    for(i=0;i<num;i++)
    {
    printf("%d",myArray[i]);
    }
    return 0;
}
