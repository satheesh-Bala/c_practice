#include <stdio.h>


int main() {

    int a;
    int *p,*q;
    scanf("%d",&a);
    p=&a;
    q=p;
    printf("%d %d ",*p,*p);
    return 0;
}
