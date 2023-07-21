#include<stdio.h>

int created=0;
int size;
int arr[100];
int exit=0,inserted=0;

void main(){
    int option;
    while(exit == 0){

    printf("\nSelect option to do operation in array\n");
    printf("Option 1 : Create\n");
    printf("Option 2 : Display\n");
    printf("Option 3 : Insert\n");
    printf("Option 4 : Search\n");
    printf("Option 5 : Delete\n");
    printf("Option 6 : Exit\n");
    scanf("%d",&option);
    switch(option){
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        insert();
        break;
    case 4:

    case 6:
        exit=1;
        break;
    default:
        printf("\nInvalid option selected");
    }
    }
}

void create(){
    if(created==0){
    printf("Enter the Array Size :  ");
    scanf("%d",&size);
    printf("\nArray with size of %d is created successfully.",size);
    created=1;
    }
    else{
        printf("\nArray with size of %d is already created.",size);
    }
}

void display(){
    if(size>0&&created==1){
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
     }
    }
    else if(created==0){
        printf("\nPlease create the array to display.");
    }
    else{
        printf("\nArray is Empty, please insert the values to display.");
    }
}

void insert(){
    if(inserted==1){
        int index,value;
        printf("\nEnter index position to insert:  \n");
        scanf("%d",&index);
        printf("\nEnter value to insert:  \n");
        scanf("%d",&value);
        for(int i=size;i>=index;i--){
            arr[i]=arr[i-1];
        }
        arr[index]=value;
        size+1;
    }
    else if(size>0&&created==1&&inserted==0){
        printf("\nEnter %d values to insert:  \n",size);
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
        printf("\n %d values to inserted successfully\n",size);
        inserted=1;
    }
    else if(created==0){
        printf("\nPlease create the array to insert values.");
    }
}
