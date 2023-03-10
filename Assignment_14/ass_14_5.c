//Find the Smallest number stored in 10 size of array...
#include<stdio.h>
#include<conio.h>

int main(){

    int arr[10];
    int i;
    int avg,min;

    printf("\n\nEnter 10 volue : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //
    min=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("Minum number store in array = %d\n",min);
   
    getch();
}