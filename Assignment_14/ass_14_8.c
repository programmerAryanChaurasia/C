//Second smallest number stored in 10 size of array...
#include<stdio.h>
#include<conio.h>
int main(){

    int arr[10];
    int i;
    int min1,min2;

    printf("\n\nEnter 10 volue : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
    if(arr[0]>arr[1]){
        min1=arr[1];
        min2=arr[0];
    }
    else{
        min1=arr[0];
        min2=arr[1];
    }
    for(i=1;i<10;i++)
    {
        if(arr[i]<min1){
            min2=min1;
             min1=arr[i];
        }
        else if(arr[i]<min2&&arr[i]>min1){
            min2=arr[i];
        }     
    }
    printf("Second Smallest number in given array = %d\n",min2);
   
    getch();
}