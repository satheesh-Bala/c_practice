#include <stdio.h>

int main() {
    int num,i;
    scanf("%d",&num);
    int myArray[num];

    for(i=0;i<num;i++)
    {
    scanf("%d",&myArray[i]);
    }
    for(i=0;i<num;i++)
    {
    printf("%d",myArray[i]);
    }
    return 0;
}
