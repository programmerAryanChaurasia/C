//Average of number store in array of size 10...
#include<stdio.h>
#include<conio.h>

int main(){

    float arr[10];
    int i;
    float avg,sum=0;

    printf("Enter 10 volue to calculate Average : ");
    for(i=0;i<10;i++)
        scanf("%f",&arr[i]);
    //
    for(i=0;i<10;i++)
        sum+=arr[i];
    avg=sum/10;

    printf("Average = %0.2f",avg);
    getch();
}