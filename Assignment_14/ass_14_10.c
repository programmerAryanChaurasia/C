//copy the the all array element into another array...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10],new_arr[10];
    int i;

    printf("Enter 10 volue  : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
   for(i=0;i<10;i++){
    new_arr[i]=arr[i];
   }
   //print data
   for(i=0;i<10;i++)
        printf("%d\t",new_arr[i]);
    
    getch();
}