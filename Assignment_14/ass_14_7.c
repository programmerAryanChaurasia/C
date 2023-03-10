//Second largest number stored in 10 size of array...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10];
    int i;
    int max1,max2;

    printf("\n\nEnter 10 volue : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }
    else{
        max1=arr[1];
        max2=arr[0];
    }
    for(i=1;i<10;i++)
    {
        if(arr[i]>max1){
            max2=max1;
             max1=arr[i];
        }
        else if(arr[i]>max2&&arr[i]<max1){
            max2=arr[i];
        }     
    }
    printf("Second largest number in given array = %d\n",max2);
   
    getch();
}