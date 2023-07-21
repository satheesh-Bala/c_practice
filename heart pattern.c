#include<stdio.h>

int main()
{
    int i,j,space=0;
for(i=1;i<=29;i++)
    {
        for(j=1;j<=41;j++)
        if(i>=12 && i<=16 && j>=11 && j<=30)//string gap
        {
            if(i==14&&j==13){
                printf("I");
            }
            else if(i==14&&j==15){printf("L");}
            else if(i==14&&j==16){printf("O");}
            else if(i==14&&j==17){printf("V");}
            else if(i==14&&j==18){printf("E");}

            else if(i==14&&j==20){printf("R");}
            else if(i==14&&j==21){printf("A");}
            else if(i==14&&j==22){printf("T");}
            else if(i==14&&j==23){printf("H");}
            else if(i==14&&j==24){printf("I");}
            else if(i==14&&j==25){printf("N");}
            else if(i==14&&j==26){printf("A");}
            else if(i==14&&j==27){printf("M");}
            else{
            printf(" ");
            }
        }
        else if(i>=1 && j<=8-i && i<=7)//top left slant
        {
            printf(" ");
        }
        else if(i>=1 && j>=13+i && i<=7 && j<=29-i )//top center slant
        {
            printf(" ");
        }
        else if(i>=1 && j>=34+i && i<=7)//top right slant
        {
            printf(" ");
        }
        else if(i>=11 && j<=i-10)
        {
            printf(" ");
        }
        else if(i>=11 && j>=52-i)
        {
            printf(" ");
        }
        else{
            printf("*");
        }

    printf("\n");
    }


}
