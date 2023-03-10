//Write a function to sort array of int type. [void sort(int *ptr, int size)]

#include<stdio.h>
#include<conio.h>
#include<string.h>

void sort(int *ptr, int size){

    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(*(ptr+i)>*(ptr+j)){
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
}

int main(){

    int i;
    int arr[10]={10,5,22,15,64,95,21,35,65,24};
    int size=sizeof(arr)/sizeof(int);

    printf("\n\nprint data before sorting : \n");
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nPrint data after Sorting.\n");

    sort(arr,size);
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    
    getch();
}