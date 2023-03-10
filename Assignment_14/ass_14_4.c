//Find the greatest number stored in 10 size of array...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10];
    int i;
    int avg,max;

    printf("\n\nEnter 10 volue : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
    max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    printf("Maximum number store in array = %d\n",max);
   
    getch();
}