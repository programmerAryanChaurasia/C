//sum of number store in array of size 10...
#include<stdio.h>
#include<conio.h>

int main(){
    int arr[10],i,sum=0;
    printf("Enter 10 volue to calculate sum : ");
    for(i=0;i<10;i++)
        scanf("%d",&arr[i]);
    //sum calculate
    for(i=0;i<10;i++)
        sum+=arr[i];
    printf("Sum = %d",sum);
    getch();
}