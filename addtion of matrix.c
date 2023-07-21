
#include<stdio.h>

int main()
{
    int a,b;
scanf("%d %d",&a ,&b);

   int *ptr1=&a;
   int *ptr2=&b;

   sum(*ptr1,*ptr2);
}
void sum(int a,int b){

printf("addtion of two num: %d",(a+b));
}
