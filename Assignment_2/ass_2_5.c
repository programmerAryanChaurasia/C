#include<stdio.h>
#include<conio.h>
int main(){

    int num,sum=0;
    printf("Enter any three digit Number : ");
    scanf("%d",&num);
    sum=sum+num%10;
    num=num/10;
    sum=sum+num%10;
    num=num/10;
    sum=sum+num%10;
    
    printf("Sum of three digit is : %d",sum);
    getch();
}