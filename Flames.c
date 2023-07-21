#include<stdio.h>

int main()
{
    int i,j,size1,size2,total;
    char(name1)[10];
    char(name2)[10];
    char(name3)[6]="FLAME\S";

    scanf("%s %s",&name1,&name2);
    i=0;
    while(name1[i]!= 0){
        i++;
    }
    size1=i;
    printf("\n%d",size1);
    i=0;
    while(name2[i]!= 0){
        i++;
    }
    size2=i;
    printf("\n%d",size2);
    total=size1+size2;


    for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(name1[i]==name2[j]){
                name1[i]=0;
                name2[j]=0;
                total=total-2;
                break;
            }
        }
    }

    printf("%s",name3);
}
