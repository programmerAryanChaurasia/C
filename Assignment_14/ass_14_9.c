//Reverse the element stored in 10 size of array...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10];
    int i,temp;

    printf("Enter 10 volue  : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
   for(i=0;i<10/2;i++){
    temp=arr[i];
    arr[i]=arr[10-1-i];
    arr[10-1-i]=temp;
   }
   //print data
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
    
    getch();
}